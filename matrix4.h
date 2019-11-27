//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_MATRIX4_H
#define FR_MATRIX4_H
#ifdef USE_FRMATH
#include "realization/FRMathRealization/matrix4x4.h"
namespace FRMath
{
    template <typename T> using Matrix4 = FRMathDef::Matrix4x4<T> ;
}
#endif
#ifdef USE_FRGLM
#include "realization/FRGLMWrapper/matrix4x4.h"
namespace FRMath
{
    template <typename T> using Matrix4 = FRGLM::Matrix4x4<T> ;
}
#endif
#endif //FR_MATRIX4_H
