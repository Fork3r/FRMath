cmake_minimum_required(VERSION 3.13)
project(FRMath)

set(CMAKE_CXX_STANDARD 17)

set(USE_FRMATH)

if(USE_FRMATH)
        find_path(FRMATH_REALIZATION_PATH "frvector2d.h" ${CMAKE_CURRENT_SOURCE_DIR}/realization/FRMathRealization)

        if((NOT FRMATH_REALIZATION_PATH) OR (NOT EXISTS ${FRMATH_REALIZATION_PATH}))
                execute_process(COMMAND git clone git@github.com:Fork3r/FRMathRealization.git -b dev
                 ${CMAKE_CURRENT_SOURCE_DIR}/realization/FRMathRealization)
        endif()
endif()
include(realization/FRMathRealization/CMakeLists.txt)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(FRMath main.cpp vector2.h ${header} ${src})