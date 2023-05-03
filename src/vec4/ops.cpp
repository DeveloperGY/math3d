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