cmake_minimum_required(VERSION 3.17)

project(Hola C)

set(SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/Hola.c)
set(TARGET_NAME Hola.elf)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../../../../common/Common.cmake)
