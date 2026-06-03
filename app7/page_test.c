#include "lvgl.h"
#include "font_conf.h"
#include "image_conf.h"
#include "stdio.h"

lv_obj_t *label;

void slider_event_cb_func(lv_event_t *e) 
{
    lv_obj_t * slider = lv_event_get_target(e);
    int32_t value = lv_slider_get_value(slider);
    lv_label_set_text_fmt(label, "%d%%", value);
}

void ini_anim(void)
{
    lv_obj_t * slider = lv_slider_create(lv_scr_act());
    lv_obj_align(slider, LV_ALIGN_LEFT_MID, 0, 0);

    lv_obj_set_style_bg_color(slider, lv_color_hex(0x00ff00), LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(slider, lv_color_hex(0x00ff00), LV_PART_KNOB);

    lv_obj_set_style_border_color(slider, lv_color_hex(0x00ff00), LV_PART_KNOB);
    lv_obj_set_style_border_width(slider, 200, LV_PART_KNOB);

    lv_slider_set_value(slider, 50, LV_ANIM_ON);
    lv_slider_set_range(slider, 0, 100);
    lv_slider_set_value(slider, 50, LV_ANIM_ON);
    lv_obj_add_event_cb(slider, slider_event_cb_func, LV_EVENT_VALUE_CHANGED, NULL);
    label = lv_label_create(lv_scr_act());
    lv_obj_align_to(label, slider, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_label_set_text(label, "50%");

    lv_obj_t * arc = lv_arc_create(lv_scr_act());
    lv_obj_set_size(arc, 150, 150);
    lv_obj_center(arc);
    lv_arc_set_value(arc, 10);
    lv_arc_set_bg_angles(arc, 0, 360);
    lv_arc_set_rotation(arc, 90);
}