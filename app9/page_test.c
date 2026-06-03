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
    label = lv_label_create(lv_scr_act());
    lv_obj_center(label);
    lv_label_set_text(label, "Hello");
    lv_timer_t *timer = lv_timer_create(timer_cb_func,1000,NULL);
    lv_timer_set_repeat_count(timer,5);// 重复次数
    lv_timer_ready(timer);// 马上刷新的次数
}