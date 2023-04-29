#include "math3d.h"

// C++

m3::vec4::vec4()
{
    this->data[0] = 0;
    this->data[1] = 0;
    this->data[2] = 0;
    this->data[3] = 0;

    return;
}

m3::vec4::vec4(float values[4])
{
    this->data[0] = values[0];
    this->data[1] = values[1];
    this->data[2] = values[2];
    this->data[3] = values[3];

    return;
}

m3::vec4::vec4(float x, float y, float z, float w)
{
    this->data[0] = x;
    this->data[1] = y;
    this->data[2] = z;
    this->data[3] = w;

    return;
}

m3::vec4::vec4(const m3::vec3 &v3, float w)
{
    this->data[0] = v3.data[0];
    this->data[1] = v3.data[1];
    this->data[2] = v3.data[2];
    this->data[3] = v3.data[3];

    return;
}

m3::vec4::vec4(const m3::vec4 &v4)
{
    this->data[0] = v4.data[0];
    this->data[1] = v4.data[1];
    this->data[2] = v4.data[2];

    return;
}


// C