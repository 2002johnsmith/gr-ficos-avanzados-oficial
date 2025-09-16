#pragma once
#include "Vector3D.h"
class Figura {
public:
    Vector3D position;
    Figura();
    virtual void Dibujar() = 0; // Método virtual puro (cada hijo lo implementa)
    
};