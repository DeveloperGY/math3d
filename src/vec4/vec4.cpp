#include "../math3d.h"

m3::vec4::vec4()
{
    this->data[0] = 0;
    this->data[1] = 0;
    this->data[2] = 0;
    this->data[3] = 1;
    return;
}

m3::vec4::vec4(double x, double y, double z, double w)
{
    this->data[0] = x;
    this->data[1] = y;
    this->data[2] = z;
    this->data[3] = w;

    return;
}

m3::vec4::vec4(double data[4])
{
    for(int i=0; i<4; i++)
    {
        this->data[i] = data[i];
    }

    return;
}

m3::vec4::vec4(const vec4 &v)
{
    for(int i=0; i<4; i++)
    {
        this->data[i] = v.data[i];
    }

    return;
}


double m3::vec4::x() const
{
    return this->data[0];
}

double m3::vec4::y() const
{
    return this->data[1];
}

double m3::vec4::z() const
{
    return this->data[2];
}

double m3::vec4::w() const
{
    return this->data[3];
}


double m3::vec4::norm() const
{
    return std::sqrt(std::pow(this->x(), 2) + std::pow(this->y(), 2) + std::pow(this->z(), 2));
}

m3::vec4 &m3::vec4::normalize()
{
    double norm = this->norm();

    this->data[0] = this->x() / norm;
    this->data[1] = this->y() / norm;
    this->data[2] = this->z() / norm;

    return *this;
}

m3::vec4 m3::vec4::normalized() const
{
    m3::vec4 result;
    double norm = this->norm();

    result.data[0] = this->x() / norm;
    result.data[1] = this->y() / norm;
    result.data[2] = this->z() / norm;
    result.data[3] = this->w();

    return result;
}