#include "lvgl.h"
#include "font_conf.h"
#include "image_conf.h"
#include "stdio.h"

void timer_cb_func(lv_timer_t *timer)
{
    printf("timer_cb_func \n");
}

void ini_anim(void)
{
    lv_obj_t * label = lv_label_create(lv_scr_act());
    lv_obj_center(label);
    lv_label_set_text(label, "Hello");
    lv_timer_create(timer_cb_func,1000,NULL);
}