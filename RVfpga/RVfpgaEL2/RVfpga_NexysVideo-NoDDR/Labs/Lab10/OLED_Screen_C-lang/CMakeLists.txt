cmake_minimum_required(VERSION 3.17)

project(OLED_Screen_C-lang C ASM)

set(SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/OLED_Screen_C-lang.c)
set(TARGET_NAME OLED_Screen_C-lang.elf)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../../../common/Common.cmake)
