#include "lvgl.h"

// void lv_example_hello_world(void)
// {
//     // 获取活动屏幕对象
//     lv_obj_t *obj = lv_obj_create(lv_scr_act());
//     lv_obj_set_size(obj, 200, 300);
//     lv_obj_set_pos(obj, 50, 50);
//     lv_obj_set_style_bg_color(obj, lv_color_hex(0x000000), LV_PART_MAIN);

//     lv_obj_t *obj1 = lv_obj_create(lv_scr_act());
//     lv_obj_set_size(obj1, 200, 200);
//     lv_obj_set_pos(obj1, 100, 100);
//     lv_obj_set_style_bg_color(obj1, lv_color_hex(0xff0000), LV_PART_MAIN);
// }

// void lv_example_hello_world(void)
// {
//     // 获取活动屏幕对象
//     lv_obj_t *obj = lv_obj_create(lv_scr_act());
//     // 设置对象在父对象中心
//     // lv_obj_center(obj);
//     // 参照其父对象对齐，并且偏移x y
//     // lv_obj_align(obj, LV_ALIGN_RIGHT_MID, 50, 100);
//     // 参照指定对象 并且偏移 x y
//     // lv_obj_align(obj, obj1, LV_ALIGN_RIGHT_MID, 100, 100);
//     lv_obj_set_style_bg_color(obj, lv_color_hex(0x000000), LV_PART_MAIN);
// }

// void lv_example_hello_world(void)
// {
//     // lv_obj_t * obj1 = lv_obj_create(lv_scr_act());
//     // lv_obj_center(obj1);
//     // lv_obj_set_size(obj1,100,100);
//     // lv_obj_set_style_bg_color(obj1,lv_color_hex(0x000000),LV_PART_MAIN); //黑色

//     // lv_obj_set_style_outline_width(obj1,5,LV_PART_MAIN);
//     // lv_obj_set_style_border_width(obj1,5,LV_PART_MAIN);
//     // lv_obj_set_style_pad_all(obj1,5,LV_PART_MAIN);
//     // lv_obj_set_style_border_color(obj1,lv_color_hex(0x00FF00),LV_PART_MAIN); //绿色
//     // lv_obj_set_style_outline_color(obj1,lv_color_hex(0x0000FF),LV_PART_MAIN);//蓝色

//     // lv_obj_t * obj2 = lv_obj_create(obj1);
//     // lv_obj_set_size(obj2,LV_PCT(100),LV_PCT(100));
//     // lv_obj_set_style_bg_color(obj2,lv_color_hex(0xFF0000),LV_PART_MAIN); //红色
//     // lv_obj_set_style_outline_width(obj2,0,LV_PART_MAIN);
//     // lv_obj_set_style_border_width(obj2,0,LV_PART_MAIN);

//     // lv_obj_t * obj1 = lv_obj_create(lv_scr_act());
//     // lv_obj_set_size(obj1,50,50);
//     // lv_obj_set_style_bg_color(obj1,lv_color_hex(0x000000),LV_PART_MAIN);
//     // lv_obj_set_align(obj1,LV_ALIGN_TOP_MID);
//     // lv_obj_set_style_pad_all(obj1,0,LV_PART_MAIN);
//     // lv_obj_set_style_border_width(obj1,0,LV_PART_MAIN);
//     // lv_obj_set_style_outline_width(obj1,0,LV_PART_MAIN);

//     // lv_obj_t * obj2 = lv_obj_create(lv_scr_act());
//     // lv_obj_set_size(obj2,50,50);
//     // lv_obj_set_style_bg_color(obj2,lv_color_hex(0xFF0000),LV_PART_MAIN);
//     // lv_obj_align_to(obj2, obj1, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);
//     // pad_all
//     // lv_obj_set_style_pad_all(obj2,0,LV_PART_MAIN);
//     // border
//     // lv_obj_set_style_border_width(obj2,0,LV_PART_MAIN);
//     // outline
//     // lv_obj_set_style_outline_width(obj2,0,LV_PART_MAIN);
//     lv_obj_t * cont = lv_obj_create(lv_scr_act());
//     //LV_PCT(100)为100%占满父窗口
//     lv_obj_set_size(cont ,LV_PCT(100),LV_PCT(100));
//     //背景颜色
//     lv_obj_set_style_bg_color(cont ,lv_color_hex(0x000000),LV_PART_MAIN);
 
//     lv_obj_set_style_pad_all(cont,0,LV_PART_MAIN);
//     lv_obj_set_style_border_width(cont,0,LV_PART_MAIN);
//     lv_obj_set_style_outline_width(cont,0,LV_PART_MAIN);
//     lv_obj_set_style_radius(cont,0,LV_PART_MAIN);
// }

/*
Input device events（输入设备事件）
LV_EVENT_PRESSED 对象已被按下
LV_EVENT_PRESSING 对象被按下（按下时连续调用）
LV_EVENT_PRESS_LOST 对象仍被按下，但光标/手指已滑离对象
LV_EVENT_SHORT_CLICKED 对象被按下一小段时间，然后释放它。如果滚动则不会调用。
LV_EVENT_LONG_PRESSED 对象已按下输入设备驱动程序中指定的至少 long_press_time。如果滚动则不会调用。
LV_EVENT_LONG_PRESSED_REPEAT 在每个 long_press_repeat_time 毫秒的 long_press_time 之后调用。如果滚动则不会调用。
LV_EVENT_CLICKED 如果对象没有点击，则在释放时调用（无论是否长按）
LV_EVENT_RELEASED 在对象被释放后的每种情况下调用
LV_EVENT_SCROLL_BEGIN 开始滚动。事件参数是 NULL 或 lv_anim_t *，如果需要，可以修改滚动动画描述符。
LV_EVENT_SCROLL_END 滚动结束。
LV_EVENT_SCROLL 对象被滚动
LV_EVENT_GESTURE 检测到手势。使用 lv_indev_get_gesture_dir(lv_indev_get_act()); 获取手势
LV_EVENT_KEY 一个密钥被发送到对象。使用 lv_indev_get_key(lv_indev_get_act()); 获取密钥
LV_EVENT_FOCUSED 对象被聚焦
LV_EVENT_DEFOCUSED 对象散焦
LV_EVENT_LEAVE 对象散焦但仍被选中
LV_EVENT_HIT_TEST 执行高级命中测试。使用 lv_hit_test_info_t * a = lv_event_get_hit_test_info(e) 并检查 a->point 是否可以点击对象。如果没有则 a->res = false

Drawing events（绘图事件）
LV_EVENT_COVER_CHECK 检查对象是否完全覆盖一个区域。事件参数是lv_cover_check_info_t *。
LV_EVENT_REFR_EXT_DRAW_SIZE 获取对象周围所需的额外绘制区域（例如用于阴影）。事件参数是 lv_coord_t * 来存储大小。仅用更大的值覆盖它。
LV_EVENT_DRAW_MAIN_BEGIN 开始主绘图阶段。
LV_EVENT_DRAW_MAIN 执行主绘图
LV_EVENT_DRAW_MAIN_END 完成主绘制阶段
LV_EVENT_DRAW_POST_BEGIN 开始后期绘制阶段（当所有孩子都被绘制时）
LV_EVENT_DRAW_POST 执行后期绘制阶段（当所有孩子都被绘制时）
LV_EVENT_DRAW_POST_END 完成后期绘制阶段（当所有孩子都被绘制时）
LV_EVENT_DRAW_PART_BEGIN 开始绘制零件。事件参数是lv_obj_draw_dsc_t *。
LV_EVENT_DRAW_PART_END 完成绘制零件。事件参数是lv_obj_draw_dsc_t *。

Other events（其他事件）
LV_EVENT_DELETE 对象正在被删除
LV_EVENT_CHILD_CHANGED 孩子被移除/添加
LV_EVENT_SIZE_CHANGED 对象坐标/大小已更改
LV_EVENT_STYLE_CHANGED 对象的样式已更改
LV_EVENT_BASE_DIR_CHANGED 基础目录已经改变
LV_EVENT_GET_SELF_SIZE 获取小部件的内部尺寸

Special events（特殊事件）
LV_EVENT_VALUE_CHANGED 对象的值已更改（即滑块移动）
LV_EVENT_INSERT 正在向对象插入文本。事件数据是插入的char *。
LV_EVENT_REFRESH 通知对象刷新其上的某些内容（对于用户）
LV_EVENT_READY 一个过程已经完成
LV_EVENT_CANCEL 一个过程被取消
*/

static void lv_event_cb_func(lv_event_t * e)
{
    printf("obj click\n");
}

void lv_example_hello_world(void)
{
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    lv_obj_center(obj);
    lv_obj_set_size(obj,50,50);
    lv_obj_set_style_bg_color(obj,lv_color_hex(0x000000),LV_PART_MAIN);
    //使得对象可以被点击
    lv_obj_add_flag(obj,LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(obj,lv_event_cb_func,LV_EVENT_CLICKED,NULL);
}