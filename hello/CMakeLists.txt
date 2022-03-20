# cmake_minimum_required(VERSION 3.1)
# project(hello)

add_executable(hello
    main.cpp
    Hello.cpp
    Hello.h
)

# target_compile_features(hello PUBLIC cxx_std_17)

# target_compile_options(hello PUBLIC Werror)