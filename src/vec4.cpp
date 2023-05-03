#include "math3d.h"

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