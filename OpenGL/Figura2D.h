#pragma once
#include "Figura.h"

class Figura2D : public Figura {
public:
    Figura2D();
    void DrawSquareWithOwnCoordinates();
    void DrawCircleWithOwnCoordinates();
    void DrawRectangleWithOwnCoordinates();

    void Dibujar() override {} // no usamos aquí directamente
};