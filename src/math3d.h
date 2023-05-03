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
        quat(double degrees, m3::vec4 axis);

        double w() const;
        double i() const;
        double j() const;
        double k() const;
    };
}

// operators


// Vec4
m3::vec4 operator+(const m3::vec4 &l, const m3::vec4 &r);
m3::vec4 operator-(const m3::vec4 &l, const m3::vec4 &r);

// % for cross, * for dot


//mat4
m3::mat4 operator*(const m3::mat4 &l, const m3::mat4 &r);


// quat
m3::quat operator*(const m3::quat &l, const m3::quat &r);

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