#include "../math3d.h"

m3::vec4 operator+(const m3::vec4 &l, const m3::vec4 &r)
{
    double x = l.x() + r.x();
    double y = l.y() + r.y();
    double z = l.z() + r.z();
    double w = (l.w() + r.w()) != 0;

    m3::vec4 result(x, y, z, w);

    return result;
}

m3::vec4 operator-(const m3::vec4 &l, const m3::vec4 &r)
{
    double x = l.x() - r.x();
    double y = l.y() - r.y();
    double z = l.z() - r.z();
    double w = (l.w() + r.w() == 0) ? 0 : 1;

    m3::vec4 result(x, y, z, w);

    return result;
}

double operator*(const m3::vec4 &l, const m3::vec4 &r)
{
    return l.x() * r.x() + l.y() * r.y() + l.z() * r.z();
}

m3::vec4 operator%(const m3::vec4 &l, const m3::vec4 &r)
{
    // Xyzzy

    m3::vec4 result;

    result.data[0] = l.y()*r.z() - l.z()*r.y();
    result.data[1] = l.z()*r.x() - l.x()*r.z();
    result.data[2] = l.x()*r.y() - l.y()*r.x();
    result.data[3] = 0;

    return result;
}