#ifndef WORLDSPACE_H
#define WORLDSPACE_H

#include "IncludeGL.h"

class WorldSpace
{
public:
    WorldSpace();

    void DrawAxis();   // Dibuja los ejes X, Y, Z
    void DrawGrid();   // Dibuja la rejilla en el plano XZ
};

#endif
