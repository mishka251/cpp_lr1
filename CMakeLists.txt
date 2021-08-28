cmake_minimum_required(VERSION 3.19)
project(LR1)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wno-parentheses -Wno-narrowing -Wno-write-strings)

#include_directories(lib)

add_executable(LR1
        main.cpp
#        lib/bgiout.cpp
        lib/dibutil.cpp
        lib/drawing.cpp
        lib/file.cpp
        lib/misc.cpp
#        lib/mouse.cpp
#        lib/palette.cpp
        lib/text.cpp
        lib/winbgi.cpp
        lib/winthread.cpp

        lib/graphics.h
        lib/dibapi.h
        lib/dibutil.h
        lib/winbgi.h
        lib/winbgim.h
        lib/winbgitypes.h
        )