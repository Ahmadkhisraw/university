cmake_minimum_required(VERSION 3.5)

project(module5-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(module5-1 main.cpp
    abstracttransport.h abstracttransport.cpp
    car.h car.cpp
    bicycle.h bicycle.cpp)

include(GNUInstallDirs)
install(TARGETS module5-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
