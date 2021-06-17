cmake_minimum_required(VERSION 3.17)
project(graphic_elements)

set(CMAKE_CXX_STANDARD 14)

add_executable(graphic_elements main.cpp CMyPoint.cpp CMyPoint.h CMySetting.cpp CMySetting.h CMyCircle.cpp CMyCircle.h CMyRectangle.cpp CMyRectangle.h output.h output.cpp)