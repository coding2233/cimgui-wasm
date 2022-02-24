# cimgui-wasm

Minimal imgui/WebAssembly/WebGL boilerplate, using CMake to build.

## Building for Web

Make sure you have cmake and [emscripten](https://emscripten.org/docs/getting_started/downloads.html) installed.
Windows need [ninja](https://ninja-build.org/).

* linux
```sh
mkdir build;
cd build;
emcmake cmake ..;
make;
```
* windows
```cmd
md build
cd build
emcmake cmake ..
ninja
```

## Building for MacOS

Make sure you've installed SDL2 on your system (for example, via `brew install sdl2`).

```sh
mkdir build;
cd build;
cmake .. -GXcode;
# ...open the generated xcode project...
```
