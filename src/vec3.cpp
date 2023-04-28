#include "math3d.h"

// C++

m3::vec3::vec3()
{
    this->data[0] = 0;
    this->data[1] = 0;
    this->data[2] = 0;

    return;
}

m3::vec3::vec3(float values[3])
{
    this->data[0] = values[0];
    this->data[1] = values[1];
    this->data[2] = values[2];

    return;
}

m3::vec3::vec3(float x, float y, float z)
{
    this->data[0] = x;
    this->data[1] = y;
    this->data[2] = z;

    return;
}

m3::vec3::vec3(const m3::vec3 &v3)
{
    this->data[0] = v3.data[0];
    this->data[1] = v3.data[1];
    this->data[2] = v3.data[2];

    return;
}

m3::vec3::vec3(const m3::vec4 &v4)
{
    this->data[0] = v4.data[0];
    this->data[1] = v4.data[1];
    this->data[2] = v4.data[2];

    return;
}


// C