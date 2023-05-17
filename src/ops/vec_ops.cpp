#include "../math3d.h"

// vec ops

// - multiply/divide scalars

m3::vec3 operator*(const m3::vec3 &vec, float val)
{
    return m3::vec3(vec.x()*val, vec.y()*val, vec.z()*val);
}

m3::vec3 operator/(const m3::vec3 &vec, float val)
{
    return m3::vec3(vec.x()/val, vec.y()/val, vec.z()/val);
}

m3::vec4 operator*(const m3::vec4 &vec, float val)
{
    return m3::vec4(vec.x()*val, vec.y()*val, vec.z()*val, vec.w());
}

m3::vec4 operator/(const m3::vec4 &vec, float val)
{
    return m3::vec4(vec.x()/val, vec.y()/val, vec.z()/val, vec.w());
}


m3::vec3 &operator*=(m3::vec3 &vec, float val)
{
    vec = vec * val;
    return vec;
}

m3::vec3 &operator/=(m3::vec3 &vec, float val)
{
    vec = vec / val;
    return vec;
}

m3::vec4 &operator*=(m3::vec4 &vec, float val)
{
    vec = vec * val;
    return vec;
}

m3::vec4 &operator/=(m3::vec4 &vec, float val)
{
    vec = vec / val;
    return vec;
}


// - add/sub vectors

m3::vec3 operator+(const m3::vec3 &v0, const m3::vec3 &v1)
{
    return m3::vec3(v0.x() + v1.x(), v0.y() + v1.y(), v0.z() + v1.z());
}

m3::vec3 operator-(const m3::vec3 &v0, const m3::vec3 &v1)
{
    return m3::vec3(v0.x() - v1.x(), v0.y() - v1.y(), v0.z() - v1.z());
}

m3::vec4 operator+(const m3::vec4 &v0, const m3::vec4 &v1) // keeps the w of the first vec
{
    return m3::vec4(v0.x() + v1.x(), v0.y() + v1.y(), v0.z() + v1.z(), v0.w());
}

m3::vec4 operator-(const m3::vec4 &v0, const m3::vec4 &v1) // keeps the w of the first vec
{
    return m3::vec4(v0.x() - v1.x(), v0.y() - v1.y(), v0.z() - v1.z(), v0.w());
}

m3::vec3 &operator+=(m3::vec3 &v0, const m3::vec3 &v1)
{
    v0 = v0 + v1;
    return v0;
}

m3::vec3 &operator-=(m3::vec3 &v0, const m3::vec3 &v1)
{
    v0 = v0 - v1;
    return v0;
}

m3::vec4 &operator+=(m3::vec4 &v0, const m3::vec4 &v1)
{
    v0 = v0 + v1;
    return v0;
}

m3::vec4 &operator-=(m3::vec4 &v0, const m3::vec4 &v1)
{
    v0 = v0 - v1;
    return v0;
}


// - dot/cross product

float operator*(const m3::vec3 &v0, const m3::vec3 &v1)
{
    return v0.x() * v1.x() + v0.y() * v1.y() + v0.z() * v1.z();
}

float operator*(const m3::vec4 &v0, const m3::vec4 &v1)
{
    return v0.x() * v1.x() + v0.y() * v1.y() + v0.z() * v1.z();
}

m3::vec3 operator%(const m3::vec3 &v0, const m3::vec3 &v1)
{
    // xyzzy
    float x = v0.y() * v1.z() - v0.z() * v1.y();
    float y = v0.z() * v1.x() - v0.x() * v1.z();
    float z = v0.x() * v1.y() - v0.y() * v1.x();
    
    return m3::vec3(x, y, z);
}

m3::vec4 operator%(const m3::vec4 &v0, const m3::vec4 &v1) // always returns direction
{
    // xyzzy
    float x = v0.y() * v1.z() - v0.z() * v1.y();
    float y = v0.z() * v1.x() - v0.x() * v1.z();
    float z = v0.x() * v1.y() - v0.y() * v1.x();
    
    return m3::vec4(x, y, z, 0);
}


// - multiply matrices

namespace m3{ // to handle namespace problems for friend functions

m3::vec4 operator*(const m3::vec4 &vec, const m3::mat4 &mat)
{
    float vals[4] = {0, 0, 0, 0};

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            vals[i] += vec.data[j] * mat.data[j*4+i];
        }
    }

    return m3::vec4(vals[0], vals[1], vals[2], vals[3]);
}

m3::vec4 operator*(const m3::mat4 &mat, const m3::vec4 &vec)
{
    float vals[4] = {0, 0, 0, 0};

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            vals[i] += vec.data[j] * mat.data[i*4+j];
        }
    }

    return m3::vec4(vals[0], vals[1], vals[2], vals[3]);
}

}


// - multiply quaternions

m3::vec3 operator*(const m3::vec3 &vec, const m3::quat &quat)
{
    m3::quat result_quat = m3::vec3::as_quat(vec) * quat;

    return m3::vec3(result_quat.i(), result_quat.j(), result_quat.k());
}

m3::vec4 operator*(const m3::vec4 &vec, const m3::quat &quat)
{
    m3::quat result_quat = m3::vec4::as_quat(vec) * quat;

    return m3::vec4(result_quat.i(), result_quat.j(), result_quat.k(), vec.w());
}

m3::vec3 operator*(const m3::quat &quat, const m3::vec3 &vec)
{
    m3::quat result_quat = quat * m3::vec3::as_quat(vec);

    return m3::vec3(result_quat.i(), result_quat.j(), result_quat.k());
}

m3::vec4 operator*(const m3::quat &quat, const m3::vec4 &vec)
{
    m3::quat result_quat = quat * m3::vec4::as_quat(vec);

    return m3::vec4(result_quat.i(), result_quat.j(), result_quat.k(), vec.w());
}