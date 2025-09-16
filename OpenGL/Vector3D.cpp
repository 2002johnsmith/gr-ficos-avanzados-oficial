#include "Vector3D.h"
#include <cmath> 

// Constructores
Vector3D::Vector3D() : x(0), y(0), z(0) {}
Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

// Operadores
Vector3D Vector3D::operator+(const Vector3D& v) const {
    return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator-(const Vector3D& v) const {
    return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator*(float escalar) const {
    return Vector3D(x*escalar, y * escalar, z * escalar);
}

// Multiplicación escalar (dot product)
float Vector3D::dot(const Vector3D& v) const {
    return (x * v.x) + (y * v.y) + (z * v.z);
}

// Multiplicación cruzada (cross product)
Vector3D Vector3D::cross(const Vector3D& v) const {
    return Vector3D(
        (y * v.z - z * v.y),
        (z * v.x - x * v.z),
        (x * v.y - y * v.x)
    );
}

// Magnitud (longitud) del vector
float Vector3D::length() const {
    return std::sqrt(x * x + y * y + z * z);
}

// Normalizar (modifica el vector)
void Vector3D::normalize() {
    float len = length();
    if (len > 0) {
        x /= len;
        y /= len;
        z /= len;
    }
}

// Devuelve un vector normalizado (no modifica el original)
Vector3D Vector3D::normal() const {
    float len = length();
    if (len > 0) {
        return Vector3D(x / len, y / len, z / len);
    }
    return Vector3D(0, 0, 0);
}

// Ángulo entre dos vectores
float Vector3D::angle(const Vector3D& v) const {
    float dotProduct = dot(v);
    float lengths = length() * v.length();
    if (lengths == 0) return 0;
    return std::acos(dotProduct / lengths); // Radianes
}