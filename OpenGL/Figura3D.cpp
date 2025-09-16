#include "Figura3D.h"
#include <GL/glut.h>
#include <cmath>
#include "Transform.h"

Figura3D::Figura3D() {}
//
//void Figura3D::DrawCubeWithOwnCoordinates() {
//    glPushMatrix();
//
//    // Defino el sistema local del cubo con transformaciones
//    glTranslatef(10.0f, 2.0f, 0.0f);
//    glRotatef(45.0f, 0.0f, 1.0f, 0.0f); // lo roto 45° alrededor del eje Y
//    glScalef(1.0f, 1.0f, 1.0f);     // escala normal
//
//    // Dibujo el cubo en su propio sistema de coordenadas
//    glColor3f(0.0f, 0.5f, 1.0f);
//    glutWireCube(5.0f); // en lugar de 1.0f
//
//    // Dibujo sus ejes locales
//    glBegin(GL_LINES);
//
//    // Eje X (rojo)
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(1.5f, 0.0f, 0.0f);
//
//    // Eje Y (verde)
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 1.5f, 0.0f);
//
//    // Eje Z (azul)
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 1.5f);
//
//    Transform::Translate(Vector3D(-5.0f, 0.0f, -20.0f));
//    Transform::Rotate(45.0f, Vector3D(1.0f, 1.0f, 0.0f));
//    Transform::Scale(Vector3D(1.5f, 1.5f, 1.5f));
//
//
//    glEnd();
//
//    glPopMatrix();
//
//}
//
//void Figura3D::DrawSphereWithOwnCoordinates() {
//    glPushMatrix();
//    // Defino el sistema local de la esfera
//    glTranslatef(25.0f, 3.0f, 0.0f);   // lo coloco a la derecha
//    glScalef(1.0f, 1.0f, 1.0f);        // escala normal
//    // Color de la esfera
//    glColor3f(1.0f, 0.5f, 0.0f); // naranja
//    // Dibujo la esfera (wireframe)
//    glutWireSphere(3.0f, 20, 20); // radio 3.0f
//    // Dibujo sus ejes locales
//    glBegin(GL_LINES);
//    // Eje X (rojo)
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(4.0f, 0.0f, 0.0f);
//    // Eje Y (verde)
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 4.0f, 0.0f);
//    // Eje Z (azul)
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 4.0f);
//
//    Transform::Translate(Vector3D(5.0f, 2.0f, -25.0f));
//    Transform::Scale(Vector3D(2.0f, 2.0f, 2.0f));
//
//    glEnd();
//    glPopMatrix();
//
//}
//
//void Figura3D::DrawPyramidWithOwnCoordinates() {
//    glPushMatrix();
//
//    // Defino el sistema local de la pirámide
//    glTranslatef(25.0f, 0.0f, 0.0f);   // mover un poco a la derecha
//    glRotatef(30.0f, 0.0f, 1.0f, 0.0f); // inclinación sobre Y
//    glScalef(1.0f, 1.0f, 1.0f);        // escala normal
//
//    // Color de la pirámide (para las líneas)
//    glColor3f(1.0f, 1.0f, 0.0f); // amarillo
//
//    // Frente
//    glBegin(GL_LINE_LOOP);
//    glVertex3f(0.0f, 3.0f, 0.0f);
//    glVertex3f(-2.0f, 0.0f, 2.0f);
//    glVertex3f(2.0f, 0.0f, 2.0f);
//    glEnd();
//
//    // Derecha
//    glBegin(GL_LINE_LOOP);
//    glVertex3f(0.0f, 3.0f, 0.0f);
//    glVertex3f(2.0f, 0.0f, 2.0f);
//    glVertex3f(2.0f, 0.0f, -2.0f);
//    glEnd();
//
//    // Atrás
//    glBegin(GL_LINE_LOOP);
//    glVertex3f(0.0f, 3.0f, 0.0f);
//    glVertex3f(2.0f, 0.0f, -2.0f);
//    glVertex3f(-2.0f, 0.0f, -2.0f);
//    glEnd();
//
//    // Izquierda
//    glBegin(GL_LINE_LOOP);
//    glVertex3f(0.0f, 3.0f, 0.0f);
//    glVertex3f(-2.0f, 0.0f, -2.0f);
//    glVertex3f(-2.0f, 0.0f, 2.0f);
//    glEnd();
//
//    // Base (cuadrado)
//    glBegin(GL_LINE_LOOP);
//    glVertex3f(-2.0f, 0.0f, 2.0f);
//    glVertex3f(2.0f, 0.0f, 2.0f);
//    glVertex3f(2.0f, 0.0f, -2.0f);
//    glVertex3f(-2.0f, 0.0f, -2.0f);
//    glEnd();
//
//    // ----- Dibujo los ejes locales -----
//    glBegin(GL_LINES);
//    // Eje X (rojo)
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(3.0f, 0.0f, 0.0f);
//
//    // Eje Y (verde)
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 3.0f, 0.0f);
//
//    // Eje Z (azul)
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 0.0f, 3.0f);
//    glEnd();
//
//    Transform::Translate(Vector3D(0.0f, -2.0f, -15.0f));
//    Transform::Rotate(30.0f, Vector3D(0.0f, 1.0f, 0.0f));
//    Transform::Scale(Vector3D(1.0f, 2.0f, 1.0f));
//
//    glPopMatrix();
//}
