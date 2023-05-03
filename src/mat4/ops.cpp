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
                result.data[i*4+j] += l.data[i*4+k] * r.data[k*4+i];
            }
        }
    }

    return result;
}