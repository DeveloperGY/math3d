#include "../math3d.h"

m3::mat4 operator*(const m3::mat4 &l, const m3::mat4 &r)
{
    m3:: mat4 result;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            result.data[i*4+j] = 0;
            for (int k=0; k<4; k++)
            {
                result.data[i*4+j] += l.data[i*4+k] * r.data[k*4+j];
            }
        }
    }

    return result;
}

m3::vec4 operator*(const m3::vec4 &l, const m3::mat4 &r)
{
    m3::vec4 result;

    for (int i=0; i<4; i++)
    {
        result.data[i] = l.x()*r.data[i] + l.y()*r.data[4+i] + l.z()*r.data[8+i] + l.w()*r.data[12+i];
    }

    return result;
}

m3::vec4 operator*(const m3::mat4 &l, const m3::vec4 &r)
{
    m3::vec4 result;

    for (int i=0; i<4; i++)
    {
        result.data[i] = l.data[i*4]*r.x() + l.data[i*4+1]*r.y() + l.data[i*4+2]*r.z() + l.data[i*4+3]*r.w();
    }

    return result;
}