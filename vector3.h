//
// Created by rsalogub on 27.11.19.
//

#ifndef FR_VECTOR3_H
#define FR_VECTOR3_H
#ifdef USE_FRMATH
#include "realization/FRMathRealization/vector3.h"
namespace FRMath
{
    using FRMathDef::Vector3;
}
#endif
#ifdef USE_FRGLM
#include "realization/FRGLMWrapper/vector3.h"
namespace FRMath
{
    using FRGLM::Vector3;
}
#endif
#endif //FR_VECTOR3_H
