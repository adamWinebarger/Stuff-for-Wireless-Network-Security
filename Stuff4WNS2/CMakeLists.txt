cmake_minimum_required(VERSION 3.0)

project(stuff4wns2)

add_executable(stuff4wns2 main.cpp)

install(TARGETS stuff4wns2 RUNTIME DESTINATION bin)
