#include "lvgl.h"
/*
 * 尺寸类样式，背景类样式，边框类样式，阴影图形类样式，文字类样式，图形类样式
 */

void lv_example_hello_world(void)
{
    // 第一种：直接设置某个对象的样式
    // lv_obj_set_style_bg_color(obj,lv_color_hex(0x000000),LV_PART_MAIN);
    // 第二种 细节类设置

    /*公用格式*/
//    static lv_style_t com_style;
//    lv_style_init(&com_style);
//    lv_style_set_bg_color(&com_style, lv_color_hex(0x000000));
    /*
        LV_PART_MAIN 主部件
        LV_PART_SCROLLBAR 滚动条
        LV_PART_INDICATOR 指标，例如用于滑块、条、开关或复选框的勾选框
        LV_PART_KNOB 像手柄一样可以抓取调整值
        LV_PART_SELECTED 表示当前选择的选项或部分
        LV_PART_ITEMS 如果小部件具有多个相似元素（例如表格单元格）
        LV_PART_TICKS 刻度上的刻度，例如对于图表或仪表
        LV_PART_CURSOR 标记一个特定的地方，例如文本区域或图表的光标
        LV_PART_CUSTOM_FIRST 可以从这里添加自定义部件。
    */
    /*
    LV_STATE_DEFAULT  正常，释放状态
    LV_STATE_CHECKED  切换或检查状态
    LV_STATE_FOCUSED 通过键盘或编码器聚焦或通过触摸板/鼠标点击
    LV_STATE_FOCUS_KEY 通过键盘或编码器聚焦，但不通过触摸板/鼠标聚焦
    LV_STATE_EDITED 由编码器编辑
    LV_STATE_HOVERED 鼠标悬停（现在不支持）
    LV_STATE_PRESSED 被按下
    LV_STATE_SCROLLED 正在滚动
    LV_STATE_DISABLED 禁用状态
    LV_STATE_USER_1 自定义状态
    LV_STATE_USER_2 自定义状态
    LV_STATE_USER_3 自定义状态
    LV_STATE_USER_4 自定义状态
    */
    /*根据公用格式细节化对象*/
    // lv_obj_add_style(objs, &com_style, LV_PART_MAIN);
    // lv_obj_add_style(objs, &com_style, LV_PART_MAIN);

    /*
        lv_obj_t * obj = lv_obj_create(lv_scr_act());
        lv_obj_center(obj);
        lv_obj_set_size(obj,50,50);
        lv_obj_add_flag(obj,LV_OBJ_FLAG_CLICKABLE);
        lv_obj_set_style_bg_color(obj,lv_color_hex(0x000000),LV_PART_MAIN);
        lv_obj_set_style_bg_color(obj,lv_color_hex(0xFF0000),LV_PART_MAIN | LV_STATE_PRESSED);
    */
}


