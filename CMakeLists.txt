cmake_minimum_required(VERSION 3.13)
project(FRMath)

set(CMAKE_CXX_STANDARD 17)

set(USE_FRMATH ON)
set(USE_FRGLM OFF)

if(USE_FRMATH)
        set(defines
                ${defines}
                USE_FRMATH
                )
        message("USING FRMATH")
        find_path(FRMATH_REALIZATION_PATH "vector2.h" ${FRMATH_PATH}/realization/FRMathRealization)

        if((NOT FRMATH_REALIZATION_PATH) OR (NOT EXISTS ${FRMATH_REALIZATION_PATH}))
                execute_process(COMMAND git clone git@github.com:Fork3r/FRMathRealization.git -b dev
                 ${FRMATH_PATH}/realization/FRMathRealization)
                set(FRMATH_REALIZATION_PATH
                        ${FRMATH_PATH}/realization/FRMathRealization
                        )
        endif()

include(${FRMATH_PATH}/realization/FRMathRealization/CMakeLists.txt)
endif()

if(USE_FRGLM)
        set(defines
                ${defines}
                USE_FRGLM
                )
        message("USING FRGLM")
        find_path(FRGLM_PATH "vector2.h" ${FRMATH_PATH}/realization/FRGLMWrapper)

        if((NOT FRGLM_PATH) OR (NOT EXISTS ${FRGLM_PATH}))
                execute_process(COMMAND git clone git@github.com:Fork3r/FRGLMWrapper.git -b dev
                        ${FRMATH_PATH}/realization/FRGLMWrapper)
                set(FRGLM_PATH
                        ${FRMATH_PATH}/realization/FRGLMWrapper
                        )
        endif()

include(${FRMATH_PATH}/realization/FRGLMWrapper/CMakeLists.txt)
endif()

include_directories(${FRMATH_PATH})

set(header
        ${header}
        ${FRMATH_PATH}/vector2.h
        ${FRMATH_PATH}/vector3.h
        ${FRMATH_PATH}/vector4.h
        ${FRMATH_PATH}/matrix4.h
        )

#add_executable(FRMath main.cpp vector2.h ${header} ${src})