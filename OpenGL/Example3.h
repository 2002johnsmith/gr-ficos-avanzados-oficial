#ifndef EXAMPLE3_H
#define EXAMPLE3_H
#include "Example.h"
 
#include "Figura.h"
class Example3 : public Example
{
    Figura* cubo;
public:
    Example3();                // Constructor
    void init();               // Inicializaci�n
    void Render();             // Renderizado
    void KeyboardFunc(unsigned char key, int X, int Y); // Teclas
    void Idle();               // Idle
};

#endif
