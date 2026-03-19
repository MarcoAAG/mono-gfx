cmake_minimum_required(VERSION 3.22)

project(monogfx VERSION 1.0.0 LANGUAGES C)
set(SSD1315_LIBRARY ${PROJECT_NAME})

add_library(${SSD1315_LIBRARY} STATIC
    src/mono_gfx.c
    src/gfx_core.c
)

target_include_directories(${SSD1315_LIBRARY}
    PUBLIC include/
    PRIVATE src/
)


