//
// Created by rsalogub on 25.11.19.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "types.h"

namespace FRMath
{

    template <typename Vector2dT>
    class Vector2D
    {
    public:
        Vector2D();
        Vector2D(pointType x, pointType y);
        ~Vector2D();

        inline void setX(pointType x);
        inline void setY(pointType y);

        inline pointType getX();
        inline pointType getY();
    private:
        Vector2dT *d_;
    };

}
#endif //VECTOR2D_H
