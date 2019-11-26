cmake_minimum_required(VERSION 3.13)
project(FRMath)

set(CMAKE_CXX_STANDARD 17)

set(USE_FRMATH)

#if(USE_FRMATH)
        find_path(FRMATH_REALIZATION_PATH "frvector2d.h" ${FRMATH_PATH}/realization/FRMathRealization)

        if((NOT FRMATH_REALIZATION_PATH) OR (NOT EXISTS ${FRMATH_REALIZATION_PATH}))
                execute_process(COMMAND git clone git@github.com:Fork3r/FRMathRealization.git -b dev
                 ${FRMATH_PATH}/realization/FRMathRealization)
        endif()
#endif()
include(${FRMATH_PATH}/realization/FRMathRealization/CMakeLists.txt)
include_directories(${FRMATH_PATH})

set(header
        ${header}
        ${FRMATH_PATH}/vector2.h
        )

#add_executable(FRMath main.cpp vector2.h ${header} ${src})