cmake_minimum_required(VERSION 2.6)
project(MYENGINE)

add_executable(game
  SRC/Game/Main.cpp
)

include_directories(
  SRC
  contrib
  contrib/msvc-windows-x86/SDL2/include
  contrib/msvc-windows-x86/glew/include
)