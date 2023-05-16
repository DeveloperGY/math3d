#include "../math3d.h"

/**
 * Constructors/Destructor
 */

m3::vec4::vec4(float x, float y, float z, float w)
{
    this->data[0] = x;
    this->data[1] = y;
    this->data[2] = z;
    this->data[3] = w;
    
    return;
}

m3::vec4::vec4(const m3::vec4 &vec)
{
    this->data[0] = vec.x();
    this->data[1] = vec.y();
    this->data[2] = vec.z();
    this->data[3] = vec.w();

    return;
}


/**
 * Utility
 */

float m3::vec4::x() const
{
    return this->data[0];
}

float m3::vec4::y() const
{
    return this->data[1];
}

float m3::vec4::z() const
{
    return this->data[2];
}

float m3::vec4::w() const
{
    return this->data[3];
}


float m3::vec4::norm(const m3::vec4 &vec)
{
    return std::sqrt(std::pow(vec.x(), 2) + std::pow(vec.y(), 2) + std::pow(vec.z(), 2));
}

m3::vec4 m3::vec4::normalize(const m3::vec4 &vec)
{
    float n = m3::vec4::norm(vec);

    m3::vec4 v(vec.x()/n, vec.y()/n, vec.z()/n, vec.w());
}


m3::vec3 m3::vec4::as_vec3(const m3::vec4 &vec)
{
    return m3::vec3(vec.x(), vec.y(), vec.z());
}

m3::quat m3::vec4::as_quat(const m3::vec4 &vec)
{
    m3::vec4 v = m3::vec4::normalize(vec);

    return m3::quat(0, v.x(), v.y(), v.z());
}