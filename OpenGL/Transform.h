#pragma once
#include "Vector3D.h"
#include <GL/glut.h>

class Transform {
public:
    // Trasladar
    static void Translate(const Vector3D& v) {
        glTranslatef(v.x, v.y, v.z);
    }

    // Rotar
    static void Rotate(float angle, const Vector3D& axis) {
        glRotatef(angle, axis.x, axis.y, axis.z);
    }

    // Escalar
    static void Scale(const Vector3D& v) {
        glScalef(v.x, v.y, v.z);
    }
};