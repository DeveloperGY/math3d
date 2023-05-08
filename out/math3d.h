/**
 * TODO: - OpenGL Conversions
 *       - vec3
*/

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
        vec4(const m3::vec4 &v);

        double x() const;
        double y() const;
        double z() const;
        double w() const;


        // Static Member Methods

        static double norm(const m3::vec4 &v);
        static m3::vec4 normalized(const m3::vec4 &v);
        
        static void to_GL(const m3::vec4 &v, float *dest);
    };

    // row major
    struct mat4
    {
        double data[16];

        mat4();
        mat4(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);
        mat4(double data[16]);
        mat4(m3::vec4 rows[4]);

        static m3::mat4 gen_rotationX(double degrees);
        static m3::mat4 gen_rotationY(double degrees);
        static m3::mat4 gen_rotationZ(double degrees);
        static m3::mat4 gen_translation(double x, double y, double z);
        static m3::mat4 gen_scale(double x, double y, double z);
        static void to_GL(const m3::mat4 &m, float *dest);
    };

    // Quaternion
    struct quat
    {
        double data[4];

        quat();
        quat(double w, double i, double j, double k);
        quat(double degrees, const m3::vec4 &axis);
        quat(const m3::vec4 &v);
        quat(const m3::quat &q);

        double w() const;
        double i() const;
        double j() const;
        double k() const;

        static m3::mat4    to_mat4(const m3::quat &q);
        static m3::quat  conjugate(const m3::quat &q);
        static   double       norm(const m3::quat &q);
        static m3::quat inverse(const m3::quat &q);
        static m3::quat normalized(const m3::quat &q);
        static void to_GL(const m3::quat &q, float *dest);
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
m3::mat4 operator*(const m3::quat &l, const m3::mat4 &r); // apply quaternion to matrix
m3::mat4 operator*(const m3::mat4 &l, const m3::quat &r); // apply quaternion to matrix

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