#include "Figura2D.h"
#include <GL/glut.h>
#include <cmath>
#include "Transform.h"

Figura2D::Figura2D() {}

void Figura2D::DrawSquareWithOwnCoordinates() {
    glPushMatrix();

    // Defino el sistema local del cuadrado
    glTranslatef(-10.0f, 0.0f, -25.0f);   // lo muevo un poco hacia atrás
    glScalef(1.0f, 1.0f, 1.0f);        // escala normal

    // Color del cuadrado
    glColor3f(1.0f, 0.0f, 1.0f); // magenta

    // Dibujo el cuadrado (wireframe con líneas)
    glBegin(GL_LINE_LOOP);
    glVertex3f(-3.0f, 0.0f, 3.0f);  // esquina inferior izquierda
    glVertex3f(3.0f, 0.0f, 3.0f);  // esquina inferior derecha
    glVertex3f(3.0f, 0.0f, -3.0f);  // esquina superior derecha
    glVertex3f(-3.0f, 0.0f, -3.0f);  // esquina superior izquierda
    glEnd();

    // Dibujo sus ejes locales
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(4.0f, 0.0f, 0.0f);

    // Eje Y (verde)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 4.0f, 0.0f);

    // Eje Z (azul)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 4.0f);
    glEnd();

    Transform::Translate(Vector3D(-5.0f, 0.0f, -10.0f));
    Transform::Rotate(45.0f, Vector3D(0.0f, 0.0f, 1.0f));
    Transform::Scale(Vector3D(1.5f, 1.5f, 1.0f));

    glPopMatrix();
}

void Figura2D::DrawCircleWithOwnCoordinates() {
    glPushMatrix();


    // Defino el sistema local del círculo
    glTranslatef(-25.0f, 0.0f, 0.0f);   // lo muevo a la izquierda
    glScalef(1.0f, 1.0f, 1.0f);        // escala normal

    // Color del círculo
    glColor3f(0.0f, 1.0f, 1.0f); // cian

    // Dibujo el círculo (wireframe)
    float radio = 4.0f;
    int segmentos = 50; // más segmentos = círculo más suave
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < segmentos; i++) {
        float theta = 2.0f * 3.1415926f *
            float(i) / float(segmentos);
        float x = radio * cosf(theta);
        float z = radio * sinf(theta);  // lo hago en XZ
        glVertex3f(x, 0.0f, z);
    }
    glEnd();

    // Dibujo sus ejes locales
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(5.0f, 0.0f, 0.0f);

    // Eje Y (verde)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 5.0f, 0.0f);

    // Eje Z (azul)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 5.0f);
    glEnd();

    Transform::Translate(Vector3D(5.0f, 0.0f, -10.0f));
    Transform::Rotate(90.0f, Vector3D(0.0f, 0.0f, 1.0f));
    Transform::Scale(Vector3D(1.2f, 1.2f, 1.0f));

    glPopMatrix();

}

void Figura2D::DrawRectangleWithOwnCoordinates() {
    glPushMatrix();

    // Defino el sistema local del rectángulo
    glTranslatef(-15.0f, 0.0f, 0.0f);   // lo coloco al otro lado para separar
    glScalef(1.0f, 1.0f, 1.0f);        // escala normal

    // Color del rectángulo
    glColor3f(0.0f, 1.0f, 1.0f); // celeste

    // Dibujo el rectángulo (wireframe con líneas)
    glBegin(GL_LINE_LOOP);
    glVertex3f(-4.0f, 0.0f, 2.0f);  // esquina inferior izquierda
    glVertex3f(4.0f, 0.0f, 2.0f);  // esquina inferior derecha
    glVertex3f(4.0f, 0.0f, -2.0f);  // esquina superior derecha
    glVertex3f(-4.0f, 0.0f, -2.0f);  // esquina superior izquierda
    glEnd();

    // Dibujo sus ejes locales
    glBegin(GL_LINES);
    // Eje X (rojo)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(5.0f, 0.0f, 0.0f);

    // Eje Y (verde)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 3.0f, 0.0f);

    // Eje Z (azul)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 3.0f);
    glEnd();

    Transform::Translate(Vector3D(0.0f, -3.0f, -10.0f));
    Transform::Rotate(30.0f, Vector3D(0.0f, 0.0f, 1.0f));
    Transform::Scale(Vector3D(2.0f, 1.0f, 1.0f));

    glPopMatrix();
}