cmake_minimum_required(VERSION 3.15)
# 工程名称demo8
project(demo9)

add_subdirectory(res)

# 编译当前目录下所有.c文件
aux_source_directory(. SOURCES)
# 生成名称为app1的可执行文件
add_executable(demo9 ${SOURCES})
# 引入头文件路径
target_include_directories(demo9 PRIVATE
                                ./
                                res/
                                res/font/
                                res/image/
                                ${CMAKE_SOURCE_DIR}/lvgl
                                ${CMAKE_SOURCE_DIR}/component/font
                                )
# 引入依赖库
target_link_libraries(demo9 PRIVATE
                        lvgl
                        font
                        )
# 当使用 PRIVATE 关键字时，表示所链接的库仅用于当前目标的实现，而不会传递给依赖该目标的其他目标。
# 换句话说：
# 当前目标（demo1）会链接这些库并使用它们。
# 其他依赖 demo1的目标（比如另一个库或可执行文件）不会自动链接这些库。


if(SIMULATOR_LINUX)
    add_compile_definitions(SIMULATOR_LINUX)
    set(PROJECT_RES_URL ${PROJECT_BINARY_DIR}/res/)
else()
    set(PROJECT_RES_URL /usr/res/)
endif()
target_compile_definitions(demo9 PUBLIC PROJECT_RES_URL="${PROJECT_RES_URL}")
message("PROJECT_RES_URL is ${PROJECT_RES_URL}")