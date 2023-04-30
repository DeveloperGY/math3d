#include "math3d.h"

m3::vec3 operator*(const m3::quat &q, const m3::vec3 &v3)
{
    m3::quat q2(v3);

    // resulting quaternion
    m3::quat rq = q * q2;

    m3::vec3 result(rq.data[1], rq.data[2], rq.data[3]);

    return result;
}

m3::vec3 operator*(const m3::vec3 &v3, const m3::quat &q)
{
    m3::quat q2(v3);

    // resulting quaternion
    m3::quat rq = q2 * q;

    m3::vec3 result(rq.data[1], rq.data[2], rq.data[3]);

    return result;
}

m3::vec3 &operator*=(m3::vec3 &v3, const m3::quat &q)
{
    m3::quat q2(v3);

    // resulting quaternion
    m3::quat rq = q2 * q;

    for (int i=0; i<3; i++)
    {
        v3.data[i] = rq.data[i+1];
    }


    return v3;
}