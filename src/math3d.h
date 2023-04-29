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
        float data[3];

        vec3();
        vec3(float values[3]);
        vec3(float x, float y, float z);
        vec3(const m3::vec3 &v3);
        vec3(const m3::vec4 &v4);
    };


    struct vec4
    {
        float data[4];

        vec4();
        vec4(float values[4]);
        vec4(float x, float y, float z, float w);
        vec4(const m3::vec3 &v3, float w);
        vec4(const m3::vec4 &v4);
    };


    struct quat
    {
        float data[4];

        quat();
        quat(float values[4]);
        quat(float w, float i, float j, float k);
        quat(float degree, const m3::vec3 &axis);
        quat(const m3::vec3 &v);
        quat(const m3::vec4 &v);
        quat(const m3::quat &q);
    };


    struct mat4
    {
        float data[16];
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


// ### Vec4 ###

// Add/Sub vec34
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

// ### END vec4 ###



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