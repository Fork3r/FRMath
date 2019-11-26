//
// Created by rsalogub on 26.11.19.
//

#include "vector2d.h"

namespace FRMath
{
    template<typename Vector2dT>
    Vector2D<Vector2dT>::Vector2D()
    {
        d_ = new Vector2dT;
    }

    template<typename Vector2dT>
    Vector2D<Vector2dT>::Vector2D(pointType x, pointType y)
    {
        d_ = new Vector2dT(x, y);
    }

    template<typename Vector2dT>
    Vector2D<Vector2dT>::~Vector2D()
    {
        delete d_;
    }

    template<typename Vector2dT>
    void Vector2D<Vector2dT>::setX(pointType x)
    {
        d_->setX(x);
    }

    template<typename Vector2dT>
    void Vector2D<Vector2dT>::setY(pointType y)
    {
        d_->setY(y);
    }

    template<typename Vector2dT>
    pointType Vector2D<Vector2dT>::getX()
    {
        return d_->getX();
    }

    template<typename Vector2dT>
    pointType Vector2D<Vector2dT>::getY()
    {
        return d_->getY();
    }
}