#include "../math3d.h"

m3::vec3::vec3()
{
    this->data[0] = 0;
    this->data[1] = 0;
    this->data[2] = 0;
    return;
}

m3::vec3::vec3(double x, double y, double z)
{
    this->data[0] = x;
    this->data[1] = y;
    this->data[2] = z;

    return;
}

m3::vec3::vec3(double data[3])
{
    for(int i=0; i<3; i++)
    {
        this->data[i] = data[i];
    }

    return;
}

m3::vec3::vec3(const vec3 &v)
{
    for(int i=0; i<3; i++)
    {
        this->data[i] = v.data[i];
    }

    return;
}


double m3::vec3::x() const
{
    return this->data[0];
}

double m3::vec3::y() const
{
    return this->data[1];
}

double m3::vec3::z() const
{
    return this->data[2];
}

double m3::vec3::norm(const m3::vec4 &v)
{
    return std::sqrt(std::pow(v.x(), 2) + std::pow(v.y(), 2) + std::pow(v.z(), 2));
}

m3::vec4 m3::vec4::normalized(const m3::vec4 &v)
{
    m3::vec4 result;
    double norm = m3::vec4::norm(v);

    result.data[0] = v.x() / norm;
    result.data[1] = v.y() / norm;
    result.data[2] = v.z() / norm;
    result.data[3] = v.w();

    return result;
}

void m3::vec4::to_GL(const m3::vec4 &v, float *dest)
{
    dest[0] = (float)v.x();
    dest[1] = (float)v.y();
    dest[2] = (float)v.z();
    dest[3] = (float)v.w();

    return;
}