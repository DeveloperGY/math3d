#ifndef MATH3D_H
#define MATH3D_H


#ifdef __cplusplus // C++

#include <cmath>

namespace m3
{
    struct mat4;
    struct quat;
    struct vec3;
    struct vec4;


    struct vec3
    {
        double data[3];

        vec3();
        vec3(float values[3]);
        vec3(float x, float y, float z);
        vec3(const m3::vec3 &v3);
        vec3(const m3::vec4 &v4);
    };


    struct vec4
    {
        double data[4];

        vec4();
        vec4(float values[4]);
        vec4(float x, float y, float z, float w);
        vec4(const m3::vec3 &v3, float w);
        vec4(const m3::vec4 &v4);
    };


    struct quat
    {
        double data[4];

        quat();
        quat(float values[4]);
        quat(float degree, float x, float y, float z);
        quat(float degree, const m3::vec3 &axis);
        quat(const m3::vec3 &v3);
        quat(const m3::vec4 &v4);
        quat(const m3::quat &q);
    };


    struct mat4
    {
        double data[16];
    };
}

// ### vec3 ###

// Add/Sub vec3
m3::vec3 operator+(const m3::vec3 &l, const m3::vec3 &r);
m3::vec3 operator-(const m3::vec3 &l, const m3::vec3 &r);
m3::vec3 &operator+=(m3::vec3 &l, const m3::vec3 &r);
m3::vec3 &operator-=(m3::vec3 &l, const m3::vec3 &r);

// Mul/Div vec3 prims
m3::vec3 operator*(const m3::vec3 &v, long n);
m3::vec3 operator*(long n, const m3::vec3 &v);
m3::vec3 &operator*=(m3::vec3 &v, long n);
m3::vec3 operator/(const m3::vec3 &v, long n);
m3::vec3 &operator/=(m3::vec3 &v, long n);

m3::vec3 operator*(const m3::vec3 &v, double n);
m3::vec3 operator*(double n, const m3::vec3 &v);
m3::vec3 &operator*=(m3::vec3 &v, double n);
m3::vec3 operator/(const m3::vec3 &v, double n);
m3::vec3 &operator/=(m3::vec3 &v, double n);

// ### END vec3 ###


// ### vec4 ###

// Add/Sub vec4
m3::vec3 operator+(const m3::vec3 &l, const m3::vec3 &r);
m3::vec3 operator-(const m3::vec3 &l, const m3::vec3 &r);
m3::vec3 &operator+=(m3::vec3 &l, const m3::vec3 &r);
m3::vec3 &operator-=(m3::vec3 &l, const m3::vec3 &r);

// Mul/Div vec4 prims
m3::vec3 operator*(const m3::vec3 &v, long n);
m3::vec3 operator*(long n, const m3::vec3 &v);
m3::vec3 &operator*=(m3::vec3 &v, long n);
m3::vec3 operator/(const m3::vec3 &v, long n);
m3::vec3 &operator/=(m3::vec3 &v, long n);

m3::vec3 operator*(const m3::vec3 &v, double n);
m3::vec3 operator*(double n, const m3::vec3 &v);
m3::vec3 &operator*=(m3::vec3 &v, double n);
m3::vec3 operator/(const m3::vec3 &v, double n);
m3::vec3 &operator/=(m3::vec3 &v, double n);

// Quats
m3::vec3 operator*(const m3::vec3 &v);

// ### END vec4 ###


// ### quat ###

// ### END quat ###


// ### mat4 ###

// ### END mat4 ###


#endif // C++


#ifndef __cplusplus // C
extern "C" {


typedef struct {
    float data[3];
} m3_vec3;

typedef struct {
    float data[4];
} m3_vec4;


}
#endif // C


#endif