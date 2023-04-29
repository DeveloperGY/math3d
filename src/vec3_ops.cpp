#include "math3d.h"

// Add/Sub vec3
m3::vec3 operator+(const m3::vec3 &l, const m3::vec3 &r)
{
    m3::vec3 result;

    for (int i=0; i<3; i++)
    {
        result.data[i] = l.data[i] + r.data[i];
    }

    return result;
}
m3::vec3 operator-(const m3::vec3 &l, const m3::vec3 &r)
{
    m3::vec3 result;

    for (int i=0; i<3; i++)
    {
        result.data[i] = l.data[i] - r.data[i];
    }

    return result;
}
m3::vec3 &operator+=(m3::vec3 &l, const m3::vec3 &r)
{
    for (int i=0; i<3; i++)
    {
        l.data[i] += r.data[i];
    }

    return l;
}
m3::vec3 &operator-=(m3::vec3 &l, const m3::vec3 &r)
{
    for (int i=0; i<3; i++)
    {
        l.data[i] -= r.data[i];
    }

    return l;
}

// Mul/Div vec3 prims

m3::vec3 operator*(const m3::vec3 &v, long n)
{
    m3::vec3 result;

    for(int i=0; i<3; i++)
    {
        result.data[i] = v.data[i] * n;
    }

    return result;
}
m3::vec3 operator*(long n, const m3::vec3 &v)
{
    return v * n;
}
m3::vec3 &operator*=(m3::vec3 &v, long n)
{
    for(int i=0; i<3; i++)
    {
        v.data[i] *= n;
    }

    return;
}
m3::vec3 operator/(const m3::vec3 &v, long n)
{
    m3::vec3 result;

    for (int i=0; i<3; i++)
    {
        result.data[i] = v.data[i] / n;
    }

    return result;
}
m3::vec3 &operator/=(m3::vec3 &v, long n)
{
    for (int i=0; i<3; i++)
    {
        v.data[i] = v.data[i] / n;
    }

    return v;
}

m3::vec3 operator*(const m3::vec3 &v, double n)
{
    m3::vec3 result;

    for(int i=0; i<3; i++)
    {
        result.data[i] = v.data[i] * n;
    }

    return result;
}
m3::vec3 operator*(double n, const m3::vec3 &v)
{
    return v * n;
}
m3::vec3 &operator*=(m3::vec3 &v, double n)
{
    for(int i=0; i<3; i++)
    {
        v.data[i] *= n;
    }

    return;
}
m3::vec3 operator/(const m3::vec3 &v, double n)
{
    m3::vec3 result;

    for (int i=0; i<3; i++)
    {
        result.data[i] = v.data[i] / n;
    }

    return result;
}
m3::vec3 &operator/=(m3::vec3 &v, double n)
{
    for (int i=0; i<3; i++)
    {
        v.data[i] = v.data[i] / n;
    }

    return v;
}

