#ifndef MATH3D_H
#define MATH3D_H


#ifdef __cplusplus
// c++

namespace m3
{
    class Vec3
    {
    private:

    public:
        float data[3];

        Vec3();
    };
}

#endif


#ifndef __cplusplus
// c
extern "C" {


typedef struct {
    float data[3]
} m3_Vec3;


}
#endif


#endif