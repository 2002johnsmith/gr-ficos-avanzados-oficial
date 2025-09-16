#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D {
public:
    float x, y, z;

    // Constructores
    Vector3D();
    Vector3D(float x, float y, float z);

    // Operadores sobrecargados
    Vector3D operator+(const Vector3D& v) const;
    Vector3D operator-(const Vector3D& v) const;
    Vector3D operator*(float escalar) const;

    // Multiplicaci�n escalar (dot product)
    float dot(const Vector3D& v) const;

    // Multiplicaci�n cruzada (cross product)
    Vector3D cross(const Vector3D& v) const;

    // Magnitud (longitud) del vector
    float length() const;

    // Normalizaci�n (modifica el vector)
    void normalize();

    // Devuelve un vector normalizado (no modifica el original)
    Vector3D normal() const;

    // �ngulo entre dos vectores (en radianes)
    float angle(const Vector3D& v) const;
};

#endif