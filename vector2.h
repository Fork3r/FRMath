//
// Created by rsalogub on 26.11.19.
//

#ifndef FR_VECTOR2_H
#define FR_VECTOR2_H
#ifdef USE_FRMATH
#include "realization/FRMathRealization/vector2.h"
namespace FRMath
{
    using FRMathDef::Vector2;
}
#endif
#ifdef USE_FRGLM
#include "realization/FRGLMWrapper/vector2.h"
namespace FRMath
{
    using FRGLM::Vector2;
}
#endif
#endif //FR_VECTOR2_H
