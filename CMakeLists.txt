cmake_minimum_required(VERSION 3.16)

project(Cripto_Manager LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Cripto_Manager main.cpp
    System.h
    System.cpp
    XOR.h
    XOR.cpp
    Ceasar.cpp
    Ceasar.h
    Vigenere.h
    Vigenere.cpp)

include(GNUInstallDirs)
install(TARGETS Cripto_Manager
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
