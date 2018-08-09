#pragma once

#define Vector3F Vector3<float32>
#define Vector3I Vector3<uint32>

#include <CommonTypes.h>
#include <cmath>

template<typename T>
struct Vector3 {
public:
    T x, y, z;

    explicit Vector3(T x = 0, T y = 0, T z = 0);

    float32 GetMagnitude();

    void SetMagnitude(float32 magnitude);

    Vector3<T> Normalized();

    void Normalize();

    Vector3<T> operator+(Vector3<T> other);

    Vector3<T> operator-(Vector3<T> other);

    Vector3<T> operator*(Vector3<T> other);

    Vector3<T> operator/(Vector3<T> other);

    void operator+=(Vector3<T> other);

    void operator-=(Vector3<T> other);

    void operator*=(Vector3<T> other);

    void operator/=(Vector3<T> other);
};


