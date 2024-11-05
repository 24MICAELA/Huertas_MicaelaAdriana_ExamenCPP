cmake_minimum_required(VERSION 3.29)
project(Huertas_MicaelaAdriana_ExamenCPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("ejercicio 1")
include_directories("ejercicio 2")
include_directories("ejercicio 3")
include_directories("ejercicio 4")

add_executable(Huertas_MicaelaAdriana_ExamenCPP
    "ejercicio 1/ejercicio_1.cpp"
    "ejercicio 1/ejercicio_1.h"
    "ejercicio 2/ejercicio_2.cpp"
    "ejercicio 2/ejercicio_2.h"
    "ejercicio 3/ejercicio_3.cpp"
    "ejercicio 3/ejercicio_3.h"
    "ejercicio 4/ejercicio_4.cpp"
    "ejercicio 4/ejercicio_4.h"
    main.cpp
    main.h)
