#include "lvgl.h"
#include "font_conf.h"
#include "stdio.h"

// void btn_event_callback(lv_event_t * event)
// {
//     lv_obj_t *bt  = lv_event_get_target(event);
//     bool state = lv_obj_has_state(bt, LV_STATE_CHECKED);
//     printf("666 %d\n",state);

// }

// void sw_event_callback(lv_event_t * event)
// {
//     lv_obj_t *sw  = lv_event_get_target(event);
//     bool state = lv_obj_has_state(sw, LV_STATE_CHECKED);
//     printf("666");
//     if (state) {
//         printf("ON\n");
//     } else {
//         printf("OFF\n");
//     }
// }

// void lv_example_hello_world(void)
// {
//     lv_font_t * font = get_font(FONT_TYPE_CN, 20);

//     lv_obj_t * btn = lv_btn_create(lv_scr_act());
//     // lv_obj_center(btn);
//     lv_obj_align(btn, LV_ALIGN_RIGHT_MID, 0, 0);
//     lv_obj_set_size(btn, 200, 100);
//     lv_obj_set_style_radius(btn, 50, LV_PART_MAIN);
//     lv_obj_set_style_bg_opa(btn, 5, LV_PART_MAIN);

//     lv_obj_t * btlabel = lv_label_create(lv_scr_act());
//     lv_obj_set_style_text_font(btlabel, font, LV_PART_MAIN);
//     lv_label_set_text(btlabel, "#牛逼#");


//     // lv_obj_center(btlabel);
//     lv_obj_align(btlabel, LV_ALIGN_RIGHT_MID, 0, 0);
//     lv_obj_add_event_cb(btn, btn_event_callback, LV_EVENT_SHORT_CLICKED, NULL);

//     lv_obj_t *sw = lv_switch_create(lv_scr_act());
//     lv_obj_center(sw);
//     lv_obj_set_style_bg_color(sw, lv_color_hex(0x00FF00), LV_PART_INDICATOR | LV_STATE_CHECKED);
//     lv_obj_add_event_cb(sw, sw_event_callback, LV_EVENT_VALUE_CHANGED, NULL);
// }

static void ta_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if (code == LV_EVENT_READY) {
        const char * text = lv_textarea_get_text(ta);
        if (text != NULL) {
            printf("current text: %s\n", text);
        } else {
            printf("current text: (empty)\n");
        }
    }
}

static void btn_click_event_cb_func(lv_event_t * e){
    printf("btn click\n");
    lv_obj_t * ta = lv_event_get_user_data(e);
    lv_event_send(ta, LV_EVENT_READY, NULL);
}

void lv_example_hello_world(void)
{
    lv_obj_t *ta = lv_textarea_create(lv_scr_act());
    lv_textarea_set_one_line(ta, true);
    lv_obj_center(ta);
    lv_textarea_set_placeholder_text(ta, "input your text");
    lv_obj_set_style_border_color(ta, lv_color_hex(0x00000), LV_PART_MAIN);
    lv_obj_set_style_border_color(ta, lv_color_hex(0x00ff00), LV_PART_CURSOR|LV_STATE_FOCUSED);
    lv_obj_add_event_cb(ta, ta_event_cb, LV_EVENT_READY, NULL);
    lv_obj_t * btn = lv_btn_create(lv_scr_act());
    lv_obj_add_event_cb(btn, btn_click_event_cb_func, LV_EVENT_CLICKED, ta);
    lv_obj_t * label = lv_label_create(btn);
    lv_label_set_text(label, "Button");
    lv_obj_center(label);
    //放在label设置后才能居中对齐
    lv_obj_align_to(btn, ta, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);    
    lv_obj_t * kb = lv_keyboard_create(lv_scr_act());
    lv_obj_set_size(kb, 500, 280);
    lv_obj_set_style_bg_color(kb, lv_color_hex(0x000000), LV_PART_MAIN);
    lv_obj_clear_state(kb, LV_STATE_FOCUS_KEY);
    lv_obj_align_to(kb, ta, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_keyboard_set_textarea(kb, ta);
}