#include <Vectors/Vector3.h>

template<typename T>
Vector3<T>::Vector3(T x, T y, T z) : x(x), y(y), z(z) {}

template<typename T>
float32 Vector3<T>::GetMagnitude() {
    return static_cast<float32>(sqrt(x * x + y * y + z * z));
}

template<typename T>
void Vector3<T>::SetMagnitude(float32 magnitude) {
    auto oldMagnitude = GetMagnitude();
    auto divider = oldMagnitude / magnitude;
    x /= divider;
    y /= divider;
    z /= divider;
}

template<typename T>
Vector3<T> Vector3<T>::operator+(Vector3<T> other) {
    return Vector3<T>(x + other.x, y + other.y, z + other.z);
}

template<typename T>
Vector3<T> Vector3<T>::operator-(Vector3<T> other) {
    return Vector3<T>(x - other.x, y - other.y, z - other.z);
}

template<typename T>
Vector3<T> Vector3<T>::operator*(Vector3<T> other) {
    return Vector3<T>(x * other.x, y * other.y, z * other.z);
}

template<typename T>
Vector3<T> Vector3<T>::operator/(Vector3<T> other) {
    return Vector3<T>(x / other.x, y / other.y, z / other.z);
}

template<typename T>
void Vector3<T>::operator+=(Vector3<T> other) {
    x += other.x;
    y += other.y;
    z += other.z;
}

template<typename T>
void Vector3<T>::operator-=(Vector3<T> other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
}

template<typename T>
void Vector3<T>::operator*=(Vector3<T> other) {
    x *= other.x;
    y *= other.y;
    z *= other.z;
}

template<typename T>
void Vector3<T>::operator/=(Vector3<T> other) {
    x /= other.x;
    y /= other.y;
    z /= other.z;
}

template<typename T>
void Vector3<T>::Normalize() {
    SetMagnitude(1);
}

template<typename T>
Vector3<T> Vector3<T>::Normalized() {
    float32 magnitude = GetMagnitude();
    return Vector3<T>(x / magnitude, y / magnitude, z / magnitude);
}
