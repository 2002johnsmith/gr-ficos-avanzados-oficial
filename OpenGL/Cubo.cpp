#include "Cubo.h"

#include "Transform.h"
#include "Example.h"
Cubo::Cubo()
{
}
void Cubo::Dibujar()
{

	glPushMatrix();

    // Defino el sistema local del cubo con transformaciones
        Transform::Translate(position);
        Transform::Rotate(0.0f, Vector3D(0.0f, 0.0f, 0.0f));
        Transform::Scale(Vector3D(1.0f, 1.0f, 1.0f));

        Example::DrawAxis(5);
        // Dibujo el cubo en su propio sistema de coordenadas
        glColor3f(0.0f, 0.5f, 1.0f);
        glutWireCube(5.0f); // en lugar de 1.0f

     
        

    glPopMatrix();

}
