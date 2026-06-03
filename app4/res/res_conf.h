/*
 * @Author: xiaozhi 
 * @Date: 2024-09-24 23:31:25 
 * @Last Modified by:   xiaozhi 
 * @Last Modified time: 2024-09-24 23:31:25 
 */
#ifndef _RES_CONF_H_
#define _RES_CONF_H_

#ifdef SIMULATOR_LINUX
    // #define FONT_PATH "./build/你的app名称/res/font/"
    #define FONT_PATH PROJECT_RES_URL "font/"
    #define IMAGE_PATH PROJECT_RES_URL "image/"
    #define MUSIC_PATH PROJECT_RES_URL "music/"

#else
    #define FONT_PATH "/usr/res/font/"
#endif

#endif