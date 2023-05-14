#ifndef MATH3D_H
#define MATH3D_H

#ifndef M3_PI
#define M3_PI 3.14159265358979323
#endif


#ifdef __cplusplus // C++

#include <cmath>

namespace m3
{
    class vec3;
    class vec4;
    class mat4;
    class quat;

    class vec3
    {
        private:
            float data[3];
        
        public: // Constructors/Destructor
            vec3(float x = 0, float y = 0, float z = 0);
            vec3(const m3::vec3 &vec);
        
        public: // Utility
            float x() const;
            float y() const;
            float z() const;
        
            static m3::vec4 to_vec4(const m3::vec3 &vec, float w);
    };

    class vec4
    {
        private:
            float data[4];
        
        public: // Constructors/Destructor
            vec4(float x = 0, float y = 0, float z = 0, float w = 1);
            vec4(const m3::vec4 &vec);
        
        public: // Utility
            float x() const;
            float y() const;
            float z() const;
            float w() const;

            static m3::vec3 to_vec3(const m3::vec4 &vec);
    };

    class mat4 // row major
    {
        private:
            float data[16];

        public: //  Constructors/Destructor
            mat4(
                float x0 = 1, float y0 = 0, float z0 = 0, float w0 = 0,
                float x1 = 0, float y1 = 1, float z1 = 0, float w1 = 0,
                float x2 = 0, float y2 = 0, float z2 = 1, float w2 = 0,
                float x3 = 0, float y3 = 0, float z3 = 0, float w3 = 1
            );

        public: // Utility
            static m3::mat4 translation_matrix(float x, float y, float z);
            static m3::mat4 rotation_x_matrix(float degrees);
            static m3::mat4 rotation_y_matrix(float degrees);
            static m3::mat4 rotation_z_matrix(float degrees);
            static m3::mat4 scale_matrix(float x, float y, float z);
            static m3::mat4 change_of_basis_matrix(m3::vec3 right, m3::vec3 up, m3::vec3 forward);
            static m3::mat4 projection_matrix(float vfov_degrees, float near, float far);
    };
}

#endif // C++


#ifndef __cplusplus // C

#include <math.h>

extern "C" {

}
#endif // C


#endif