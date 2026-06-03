#include "lvgl.h"
#include "font_conf.h"
#include "image_conf.h"
#include "stdio.h"

void anim_cb(void *img, int32_t val)
{
    lv_img_set_angle(img, val);
}

static void set_temp(void *bar, int32_t val)
{
    lv_bar_set_value(bar, val, LV_ANIM_ON);
}

void ini_anim(void)
{
    lv_obj_t *img = lv_img_create(lv_scr_act());
    lv_img_set_src(img, GET_IMAGE_PATH("icon_loading.png"));
    lv_obj_center(img);
    lv_anim_t anim;
    lv_anim_init(&anim);
    lv_anim_set_var(&anim, img);
    lv_anim_set_values(&anim, 0, 3600);
    lv_anim_set_time(&anim, 1500);
    lv_anim_set_exec_cb(&anim, anim_cb);
    lv_anim_set_repeat_count(&anim, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_path_cb(&anim, lv_anim_path_ease_out);
    lv_anim_start(&anim);
    lv_obj_t * bar = lv_bar_create(lv_scr_act());
    lv_obj_align_to(bar, img, LV_ALIGN_OUT_BOTTOM_MID, 30, 10);
    lv_obj_set_size(bar, 200, 20);
    lv_bar_set_value(bar, 50, LV_ANIM_ON);
    // 背景（灰色）
    lv_obj_set_style_bg_color(bar, lv_color_hex(0x333333), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(bar, LV_OPA_COVER, LV_PART_MAIN);

    // 指示器（从绿到红渐变）
    lv_obj_set_style_bg_color(bar, lv_color_hex(0x00FF00), LV_PART_INDICATOR);
    lv_obj_set_style_bg_grad_color(bar, lv_color_hex(0xFF0000), LV_PART_INDICATOR);
    lv_obj_set_style_bg_grad_dir(bar, LV_GRAD_DIR_VER, LV_PART_INDICATOR);
    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_var(&a, bar);
    lv_anim_set_values(&a, 0, 100);
    lv_anim_set_time(&a, 3000);
    lv_anim_set_exec_cb(&a, set_temp);
    lv_anim_set_repeat_count(&a, 2);
    lv_anim_start(&a);
}