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

void operator+=(m3::vec3 &l, const m3::vec3 &r)
{
    for (int i=0; i<3; i++)
    {
        l.data[i] += r.data[i];
    }

    return;
}

void operator-=(m3::vec3 &l, const m3::vec3 &r)
{
    for (int i=0; i<3; i++)
    {
        l.data[i] -= r.data[i];
    }

    return;
}

// Mul/Div vec3 prims