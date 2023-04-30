#include "math3d.h"

// C++

m3::quat::quat()
{
    this->data[0] = 1;
    this->data[1] = 0;
    this->data[2] = 0;
    this->data[3] = 0;

    return;
}

m3::quat::quat(float values[4])
{
    this->data[0] = values[0];
    this->data[1] = values[1];
    this->data[2] = values[2];
    this->data[3] = values[3];

    return;
}

m3::quat::quat(float degree, float x, float y, float z)
{
    float s = std::sin(degree/2.0f);

    this->data[0] = std::cos(degree/2.0f);
    this->data[1] = s * x;
    this->data[2] = s * y;
    this->data[3] = s * z;

    return;
}

m3::quat::quat(float degree, const m3::vec3 &axis)
{
    float s = std::sin(degree/2.0f);

    this->data[0] = std::cos(degree/2.0f);
    this->data[1] = s * axis.data[0];
    this->data[2] = s * axis.data[1];
    this->data[3] = s * axis.data[2];

    return;
}

m3::quat::quat(const m3::vec4 &v)
{
    this->data[0] = v.data[0];
    this->data[1] = v.data[1];
    this->data[2] = v.data[2];
    this->data[3] = v.data[3];

    return;
}

m3::quat::quat(const m3::quat &q)
{
    this->data[0] = q.data[0];
    this->data[1] = q.data[1];
    this->data[2] = q.data[2];
    this->data[3] = q.data[3];

    return;
}


// C