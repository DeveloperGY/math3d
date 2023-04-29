#include "math3d.h"

// Add/Sub vec4
m3::vec4 operator+(const m3::vec4 &l, const m3::vec4 &r)
{
    m3::vec4 result;

    for (int i=0; i<4; i++)
    {
        result.data[i] = l.data[i] + r.data[i];
    }

    return result;
}
m3::vec4 operator-(const m3::vec4 &l, const m3::vec4 &r)
{
    m3::vec4 result;

    for (int i=0; i<4; i++)
    {
        result.data[i] = l.data[i] - r.data[i];
    }

    return result;
}
m3::vec4 &operator+=(m3::vec4 &l, const m3::vec4 &r)
{
    for (int i=0; i<4; i++)
    {
        l.data[i] += r.data[i];
    }

    return l;
}
m3::vec4 &operator-=(m3::vec4 &l, const m3::vec4 &r)
{
    for (int i=0; i<4; i++)
    {
        l.data[i] -= r.data[i];
    }

    return l;
}

// Mul/Div vec4 prims

m3::vec4 operator*(const m3::vec4 &v, long n)
{
    m3::vec4 result;

    for(int i=0; i<4; i++)
    {
        result.data[i] = v.data[i] * n;
    }

    return result;
}
m3::vec4 operator*(long n, const m3::vec4 &v)
{
    return v * n;
}
m3::vec4 &operator*=(m3::vec4 &v, long n)
{
    for(int i=0; i<4; i++)
    {
        v.data[i] *= n;
    }

    return;
}
m3::vec4 operator/(const m3::vec4 &v, long n)
{
    m3::vec4 result;

    for (int i=0; i<4; i++)
    {
        result.data[i] = v.data[i] / n;
    }

    return result;
}
m3::vec4 &operator/=(m3::vec4 &v, long n)
{
    for (int i=0; i<4; i++)
    {
        v.data[i] = v.data[i] / n;
    }

    return v;
}

m3::vec4 operator*(const m3::vec4 &v, double n)
{
    m3::vec4 result;

    for(int i=0; i<4; i++)
    {
        result.data[i] = v.data[i] * n;
    }

    return result;
}
m3::vec4 operator*(double n, const m3::vec4 &v)
{
    return v * n;
}
m3::vec4 &operator*=(m3::vec4 &v, double n)
{
    for(int i=0; i<4; i++)
    {
        v.data[i] *= n;
    }

    return;
}
m3::vec4 operator/(const m3::vec4 &v, double n)
{
    m3::vec4 result;

    for (int i=0; i<4; i++)
    {
        result.data[i] = v.data[i] / n;
    }

    return result;
}
m3::vec4 &operator/=(m3::vec4 &v, double n)
{
    for (int i=0; i<4; i++)
    {
        v.data[i] = v.data[i] / n;
    }

    return v;
}

