//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_VECTOR4_H
#define FR_VECTOR4_H
#ifdef USE_FRMATH
#include "realization/FRMathRealization/vector4.h"
namespace FRMath
{
    using FRMathDef::Vector4;
}
#endif
#ifdef USE_FRGLM
#include "realization/FRGLMWrapper/vector4.h"
namespace FRMath
{
    using FRGLM::Vector4;
}
#endif
#endif //FR_VECTOR4_H
