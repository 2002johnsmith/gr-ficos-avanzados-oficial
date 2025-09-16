#include "WorldSpace.h"

WorldSpace::WorldSpace()
{
}

void WorldSpace::DrawAxis()
{
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1, 0, 0);
    glVertex3f(-100, 0, 0);
    glVertex3f(100, 0, 0);

    // Eje Y (verde)
    glColor3f(0, 1, 0);
    glVertex3f(0, -100, 0);
    glVertex3f(0, 100, 0);

    // Eje Z (azul)
    glColor3f(0, 0, 1);
    glVertex3f(0, 0, -100);
    glVertex3f(0, 0, 100);
    glEnd();
}

void WorldSpace::DrawGrid()
{
    glColor3f(0.5f, 0.5f, 0.5f); // Gris
    glBegin(GL_LINES);
    for (int i = -150; i <= 150; i++)
    {
        // Líneas paralelas al eje X
        glVertex3f(-150, 0, i);
        glVertex3f(100, 0, i);

        // Líneas paralelas al eje Z
        glVertex3f(i, 0, -150);
        glVertex3f(i, 0, 150);
    }
    glEnd();
}
