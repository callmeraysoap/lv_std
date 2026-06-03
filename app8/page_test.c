#include "lvgl.h"
#include "font_conf.h"
#include "image_conf.h"
#include "stdio.h"

void ini_anim(void)
{
    lv_obj_t * roller = lv_roller_create(lv_scr_act());
    lv_roller_set_options(roller, "Monday\n""Tue\n""3\n""4\n""5\n""6\n""7", LV_ROLLER_MODE_INFINITE);
    lv_obj_center(roller);
}