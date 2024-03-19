cmake_minimum_required(VERSION 3.26)
project(POO_3964_Clase03_HerenciaMultipleYPackage)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO_3964_Clase03_HerenciaMultipleYPackage main.cpp
        Animals/Gato.cpp
        Animals/Gato.h
        Animals/Perro.cpp
        Animals/Perro.h
        ParentClasses/Animal.cpp
        ParentClasses/Animal.h
        ParentClasses/Mamifero.cpp
        ParentClasses/Mamifero.h)
