#include "Example2.h"
#include "IncludeGL.h"
#include <cmath>

Example2::Example2()
{
}

void Example2::init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(30, 30, 30, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
}

void Example2::Render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     

    glFlush();
}

void Example2::KeyboardFunc(unsigned char key, int X, int Y)
{
}

void Example2::Idle()
{
}

void Example2::DrawPointWithTransform()
{
    glPushMatrix();
    glPointSize(10.0f);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
void Example2::DrawAxisXYWithTransform()
{
    glPushMatrix();

    //Ejemplo de transformación: levantar el sistema un poco en Z
    glTranslatef(0.0f, 0.0f, 1.0f);

    glBegin(GL_LINES);
    // Eje X en rojo
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(50.0f, 0.0f, 0.0f);

    // Eje Y en verde
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 50.0f, 0.0f);

    // Eje Z en verde
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 50.0f);
    glEnd();

    glPopMatrix();
}
void Example2::DrawLineWithTransform()
{
    glPushMatrix();

    // Ejemplo de transformaciones
    glTranslatef(2.0f, 1.0f, 0.0f);   // mover la línea
    glRotatef(30.0f, 0.0f, 0.0f, 1.0f); // rotar en Z
    glScalef(1.5f, 1.5f, 1.0f);       // escalar

    // Dibujar la línea
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.5f, 1.0f);  // azul clarito
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(3.0f, 2.0f, 0.0f); // punto final
    glEnd();

    glPopMatrix();
}
void Example2::DrawPointAndAxisXYZWithTransform()
{
    glPushMatrix();

    // Transformaciones
    glTranslatef(1.0f, 1.0f, 1.0f);  // mover un poco todo el sistema
    glRotatef(20.0f, 1.0f, 0.0f, 0.0f); // rotar en X
    glScalef(1.0f, 1.0f, 1.0f);         // escalar normal

    // Punto en el origen del sistema
    glPointSize(8.0f);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 1.0f, 0.0f);   // verde
    glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();

    // Ejes X, Y y Z
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(3.0f, 0.0f, 0.0f);

    // Eje Y (verde)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 3.0f, 0.0f);

    // Eje Z (azul)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 3.0f);
    glEnd();

    glPopMatrix();
}
void Example2::DrawCubeWithTransform() {
    glPushMatrix();

    // Transformaciones (ejemplo: elevarlo un poco en Y y escalarlo)
    glTranslatef(0.0f, 0.5f, 0.0f);
    glScalef(1.0f, 1.0f, 1.0f);

    // Color del cubo
    glColor3f(0.0f, 0.5f, 1.0f);

    // Cubo de aristas 1.0
    glutWireCube(10.0f);
    //glutSolidCube(1.0f);

    glPopMatrix();
}