#ifndef MATH3D_H
#define MATH3D_H


#ifdef __cplusplus // C++

namespace m3
{
    // predeclaration
    struct vec4;


    // declarations
    struct vec4
    {
        double data[4];

        vec4(double x, double y, double z, double w);
        vec4(double data[4]);
    };
}

#endif // C++


#ifndef __cplusplus // C
extern "C" {



}
#endif // C


#endif

/**
 * Get Vec4 done first
 * document
 * Mat4
 * document
 * Quaternion
 * document
 * Vec3
 * document
*/