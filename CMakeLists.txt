cmake_minimum_required (VERSION 3.0)

project(cimgui-wasm)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -Wno-missing-braces")

add_definitions("-DIMGUI_DISABLE_OBSOLETE_FUNCTIONS")

if(${EMSCRIPTEN})
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lGL -O3 -s USE_GLFW=3 -std=c++1z -s FULL_ES3=1 -s USE_WEBGL2=1 -s WASM=1")
    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/index.html DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
    # file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/index.js DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
else()
    # find_package(SDL2 REQUIRED)
    find_package(GLFW REQUIRED)
    find_package(OpenGL REQUIRED)
endif()

add_subdirectory(cimgui)

include_directories(src)
include_directories(cimgui cimgui/imgui cimgui/imgui/backends)
include_directories(SYSTEM external ${GLFW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS})

add_executable(index
    src/main.cpp
    cimgui/imgui/backends/imgui_impl_glfw.h
    cimgui/imgui/backends/imgui_impl_glfw.cpp
    cimgui/imgui/backends/imgui_impl_opengl3.h
    cimgui/imgui/backends/imgui_impl_opengl3.cpp
)

source_group(external REGULAR_EXPRESSION external)
source_group(src REGULAR_EXPRESSION src)

set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++17")

target_link_libraries(index cimgui ${GLFW_LIBRARIES} ${OPENGL_LIBRARIES})   
