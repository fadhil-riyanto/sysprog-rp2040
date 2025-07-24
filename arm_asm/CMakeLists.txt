cmake_minimum_required(VERSION 3.13)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(/home/fadhil_riyanto/git_clone/pico-sdk/pico_sdk_init.cmake)

pico_sdk_init()

PROJECT(MY_RP2040_ASM_PROJECT
        LANGUAGES C CXX ASM
        DESCRIPTION "rp2040 program in assembly"
)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(MY_RP2040_ASM_PROJECT
        hw_hello.S
        hw_inline.c
)
target_link_libraries(MY_RP2040_ASM_PROJECT pico_stdlib)

pico_add_extra_outputs(MY_RP2040_ASM_PROJECT)