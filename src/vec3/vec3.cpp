#include "../math3d.h"

/**
 * Constructors/Destructor
 */

m3::vec3::vec3(float x, float y, float z)
{
    this->data[0] = x;
    this->data[1] = y;
    this->data[2] = z;
    
    return;
}

m3::vec3::vec3(const m3::vec3 &vec)
{
    this->data[0] = vec.x();
    this->data[1] = vec.y();
    this->data[2] = vec.z();

    return;
}


/**
 * Utility
 */

float m3::vec3::x() const
{
    return this->data[0];
}

float m3::vec3::y() const
{
    return this->data[1];
}

float m3::vec3::z() const
{
    return this->data[2];
}


float m3::vec3::norm(const m3::vec3 &vec)
{
    return std::sqrt(std::pow(vec.x(), 2.0f) + std::pow(vec.y(), 2.0f) + std::pow(vec.z(), 2.0f));
}

m3::vec3 m3::vec3::normalize(const m3::vec3 &vec)
{
    float n = m3::vec3::norm(vec);

    return m3::vec3(vec.x()/n, vec.y()/n, vec.z()/n);
}


m3::vec4 m3::vec3::as_vec4(const m3::vec3 &vec, float w)
{
    return m3::vec4(vec.x(), vec.y(), vec.z(), w);
}

m3::quat m3::vec3::as_quat(const m3::vec3 &vec)
{
    m3::vec3 v = m3::vec3::normalize(vec);

    return m3::quat(0, v.x(), v.y(), v.z());
}

m3::vec4 m3::vec3::as_direction(const m3::vec3 &vec)
{
    return m3::vec3::as_vec4(vec, 0);
}

m3::vec4 m3::vec3::as_position(const m3::vec3 &vec)
{
    return m3::vec3::as_vec4(vec, 1);
}