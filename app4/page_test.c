#include "lvgl.h"
#include "font_conf.h"
/*
 * 尺寸类样式，背景类样式，边框类样式，阴影图形类样式，文字类样式，图形类样式
 */

void lv_example_hello_world(void)
{
    // lv_obj_t * label = lv_label_create(lv_scr_act());
    // lv_obj_center(label);
    // lv_obj_set_style_text_font(label, &lv_font_simsun_16_cjk, LV_PART_MAIN); // 加载汉字 默认字库

    // lv_label_set_recolor(label,true);// 设置颜色

    int data = 10;

    // lv_label_set_text_fmt(label, "#0000ff Hello: %d# #ff00ff 小智#", data);
    lv_font_t * font = get_font(FONT_TYPE_CN, 20);
    lv_obj_t * label = lv_label_create(lv_scr_act());
    lv_obj_set_style_text_font(label, font, LV_PART_MAIN);
    lv_label_set_text_fmt(label, "#0000ff Hello: %d# #ff00ff 牛逼#", data);
    lv_obj_center(label);
}


