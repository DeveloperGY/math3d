#ifndef MATH3D_H
#define MATH3D_H

#ifndef M3_PI
#define M3_PI 3.14159265358979323
#endif

#ifdef __cplusplus // C++

#include <cmath>

namespace m3
{
    // predeclaration
    struct vec4;
    struct mat4;
    struct quat;


    // declarations
    struct vec4
    {
        double data[4];

        vec4();
        vec4(double x, double y, double z, double w);
        vec4(double data[4]);
        vec4(const vec4 &v);

        double x() const;
        double y() const;
        double z() const;
        double w() const;

        // modifies the calling vector
        m3::vec4 &normalize();

        // does not modify calling vector
        m3::vec4 normalized() const;

        double norm() const;
    };

    // row major
    struct mat4
    {
        double data[16];

        mat4();
        mat4(double data[16]);
        mat4(m3::vec4 rows[4]);
    };

    struct quat
    {
        double data[4];

        quat();
        quat(double w, double i, double j, double k);
        quat(double degrees, const m3::vec4 &axis);
        quat(const m3::vec4 &v);

        double w() const;
        double i() const;
        double j() const;
        double k() const;

        m3::mat4 to_mat4() const;

        m3::quat conjugate() const;
        double norm() const;
        m3::quat reciprocal() const;
        m3::quat normalized() const;
        m3::quat &normalize();
    };
}

// operators


// Vec4
m3::vec4 operator+(const m3::vec4 &l, const m3::vec4 &r);
m3::vec4 operator-(const m3::vec4 &l, const m3::vec4 &r);
double operator*(const m3::vec4 &l, const m3::vec4 &r); // dot product
m3::vec4 operator%(const m3::vec4 &l, const m3::vec4 &r); // cross product


//mat4
m3::mat4 operator*(const m3::mat4 &l, const m3::mat4 &r); // multiply matrices
m3::vec4 operator*(const m3::vec4 &l, const m3::mat4 &r); // row vector
m3::vec4 operator*(const m3::mat4 &l, const m3::vec4 &r); // column vector
m3::mat4 operator*(const m3::quat &l, const m3::mat4 &r);
m3::mat4 operator*(const m3::mat4 &l, const m3::quat &r);

// quat
m3::quat operator*(const m3::quat &l, const m3::quat &r); // multiply quats
m3::vec4 operator*(const m3::vec4 &l, const m3::quat &r); // apply quat to vector
m3::vec4 operator*(const m3::quat &l, const m3::vec4 &r); // apply quat to vector

#endif // C++


#ifndef __cplusplus // C

#include <math.h>

extern "C" {

}
#endif // C


#endif

/**
 * Get Vec4 done first
 * document
 * Mat4
 * document
 * Quaternion
 * document
 * Vec3
 * document
*/