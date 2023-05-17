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