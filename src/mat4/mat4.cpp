#include "../math3d.h"

m3::mat4::mat4()
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            this->data[i*4+j] = (double)(i==j);
        }
    }

    return;
}

m3::mat4::mat4(double data[16])
{
    for (int i=0; i<16; i++)
    {
        this->data[i] = data[i];
    }

    return;
}

m3::mat4::mat4(m3::vec4 rows[4])
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            this->data[i*4+j] = rows[i].data[j];
        }
    }

    return;
}