//
// Created by rsalogub on 25.11.19.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "types.h"

namespace FRMath
{

    class Vector2D
    {
    public:
        Vector2D() = default;
        Vector2D(pointType x, pointType y);

        inline setX(pointType x);
        inline setY(pointType y);
    private:
        pointType x_ = 0;
        pointType y_ = 0;
    };

}
#endif //VECTOR2D_H
