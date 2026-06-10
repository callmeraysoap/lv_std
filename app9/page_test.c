#include "lvgl.h"
#include "font_conf.h"
#include "image_conf.h"
#include "stdio.h"
lv_obj_t * label;
int count = 0;
void timer_cb_func(lv_timer_t *timer)
{
    printf("timer_cb_func \n");
    count++;
    lv_label_set_text_fmt(label, "Count %d \n", count);
}

void ini_anim(void)
{
    lv_obj_t * cont_row = lv_obj_create(lv_scr_act());
    lv_obj_set_size(cont_row, 1000, 200);
    lv_obj_set_flex_flow(cont_row, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_style_pad_column(cont_row, 50, LV_PART_MAIN);
    for (int i = 0; i < 5; i++) {
        lv_obj_t * obj = lv_btn_create(cont_row);
        lv_obj_set_size(obj, 100, 50);
        lv_obj_t * label = lv_label_create(obj);
    }
}