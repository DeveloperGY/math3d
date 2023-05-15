#include "../math3d.h"

m3::quat::quat(float w, float i, float j, float k)
{
    this->data[0] = w;
    this->data[1] = i;
    this->data[2] = j;
    this->data[3] = k;

    return;
}

m3::quat::quat(float degrees, const m3::vec3 &axis)
{
    float radians = degrees * (M3_PI / 180.0f);

    float s = std::sin(radians / 2.0f);

    m3::vec3 n_axis = m3::vec3::normalize(axis);

    this->data[0] = std::cos(radians/2);
    this->data[1] = s * n_axis.x();
    this->data[2] = s * n_axis.y();
    this->data[3] = s * n_axis.z();

    return;
}

m3::quat::quat(const m3::quat &q)
{
    this->data[0] = q.w();
    this->data[1] = q.i();
    this->data[2] = q.j();
    this->data[3] = q.k();

    return;
}


float m3::quat::w() const
{
    return this->data[0];
}

float m3::quat::i() const
{
    return this->data[1];
}

float m3::quat::j() const
{
    return this->data[2];
}

float m3::quat::k() const
{
    return this->data[3];
}