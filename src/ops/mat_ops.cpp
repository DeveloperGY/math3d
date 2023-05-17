#include "../math3d.h"

// - multiply matrices

namespace m3 { // to handle namespace problems for friend functions

m3::mat4 operator*(const m3::mat4 &m0, const m3::mat4 &m1)
{
    m3::mat4 result(
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0
    );

    for (int r=0; r<4; r++)
    {
        for (int c=0; c<4; c++)
        {
            for (int i=0; i<4; i++)
            {
                result.data[r*4+c] += m0.data[r*4+i] * m1.data[i*4+c];
            }
        }
    }

    return result;
}

}


// - multiply quaternions

namespace m3 {

m3::mat4 operator*(const m3::mat4 &mat, const m3::quat &quat)
{
    return mat * m3::quat::as_mat4(quat);
}

m3::mat4 operator*(const m3::quat &quat, const m3::mat4 &mat)
{
    return m3::quat::as_mat4(quat) * mat;
}

}