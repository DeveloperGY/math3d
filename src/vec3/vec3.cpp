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

m3::vec4 m3::vec3::to_vec4(const m3::vec3 &vec, float w)
{
    return m3::vec4(vec.x(), vec.y(), vec.z(), w);
}