cmake_minimum_required (VERSION 3.0)

project(cimguiWasm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -Wno-missing-braces")

if(${EMSCRIPTEN})
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 --preload-file fonts -s USE_SDL=2 -std=c++1z")
    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/index.html DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/fonts/wqy-microhei.ttc DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/fonts)
else()
    find_package(SDL2 REQUIRED)
    find_package(OpenGL REQUIRED)
endif()

add_subdirectory(cimgui)

include_directories(src)
include_directories(cimgui cimgui/imgui cimgui/imgui/backends)
include_directories(SYSTEM external ${SDL2_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS})

add_executable(index
    src/main.cpp
    cimgui/imgui/backends/imgui_impl_sdl.h
    cimgui/imgui/backends/imgui_impl_sdl.cpp
    cimgui/imgui/backends/imgui_impl_opengl3.h
    cimgui/imgui/backends/imgui_impl_opengl3.cpp
)

source_group(external REGULAR_EXPRESSION external)
source_group(src REGULAR_EXPRESSION src)

set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++17")

target_link_libraries(index cimgui ${SDL2_INCLUDE_DIRS} ${OPENGL_LIBRARIES})   
