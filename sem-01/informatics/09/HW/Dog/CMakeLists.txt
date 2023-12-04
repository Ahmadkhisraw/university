cmake_minimum_required(VERSION 3.5)

project(Dog LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Dog main.cpp
    dog.h dog.cpp)

include(GNUInstallDirs)
install(TARGETS Dog
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
