#include "Example3.h"
#include "IncludeGL.h"
 
#include "Cubo.h"
 

Example3::Example3()
{
}

void Example3::init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(30, 30, 30, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);


    
    cubo = new Cubo();
    ((Cubo*)cubo)->position = Vector3D(2,1,4);
    
}

void Example3::Render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     
    Example::DrawAxis(10);
     
    ((Cubo*)cubo)->Dibujar();
    //// --- Figuras 3D ---
     
    // Con doble buffer se usa swap
    glutSwapBuffers();
}

void Example3::KeyboardFunc(unsigned char key, int X, int Y)
{
    switch (key)
    {
    case 27: // ESC para salir
        exit(0);
        break;
    default:
        break;
    }
}

void Example3::Idle()
{
    // Aquí puedes poner animaciones si quieres
    glutPostRedisplay();
}
