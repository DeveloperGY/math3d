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
        
        public: // Utility
            float x() const;
            float y() const;
            float z() const;
        
            static float norm(const m3::vec3 &vec);
            static m3::vec3 normalize(const m3::vec3 &vec);

            static m3::vec4 as_vec4(const m3::vec3 &vec, float w);
            static m3::quat as_quat(const m3::vec3 &vec);
            static m3::vec4 as_direction(const m3::vec3 &vec);
            static m3::vec4 as_position(const m3::vec3 &vec);
    };

    class vec4
    {
        private:
            float data[4];
        
        public: // Constructors/Destructor
            vec4(float x = 0, float y = 0, float z = 0, float w = 1);
        
        public: // Utility
            float x() const;
            float y() const;
            float z() const;
            float w() const;

            static float norm(const m3::vec4 &vec);
            static m3::vec4 normalize(const m3::vec4 &vec);

            static m3::vec3 as_vec3(const m3::vec4 &vec);
            static m3::quat as_quat(const m3::vec4 &vec);

            friend m3::vec4 operator*(const m3::vec4 &vec, const m3::mat4 &mat);
            friend m3::vec4 operator*(const m3::mat4 &mat, const m3::vec4 &vec);
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
            static m3::mat4 projection_matrix(float vfov_degrees, float aspect_ratio, float near, float far);

            friend m3::vec4 operator*(const m3::vec4 &vec, const m3::mat4 &mat);
            friend m3::vec4 operator*(const m3::mat4 &mat, const m3::vec4 &vec);
            friend m3::mat4 operator*(const m3::mat4 &m0, const m3::mat4 &m1);
            friend m3::mat4 operator*(const m3::mat4 &mat, const m3::quat &quat);
            friend m3::mat4 operator*(const m3::quat &quat, const m3::mat4 &mat);
    };

    class quat
    {
        private:
            float data[4];

        public: // Constructors/Destructor
            quat(float w = 0, float i = 1, float j = 0, float k = 0);
            quat(float degrees, const m3::vec3 &axis);
            quat(const m3::quat &q);
        
        public: // Utility
            float w() const;
            float i() const;
            float j() const;
            float k() const;

            static m3::quat conjugate(const m3::quat &quat);
            static m3::quat inverse(const m3::quat &quat);
            static float norm(const m3::quat &quat);
            static m3::quat normalize(const m3::quat &quat);
            static m3::mat4 as_mat4(const m3::quat &quat);
    };
}

// Vec Ops


// - multiply/divide scalars

m3::vec3 operator*(const m3::vec3 &vec, float val);
m3::vec3 operator/(const m3::vec3 &vec, float val);
m3::vec4 operator*(const m3::vec4 &vec, float val);
m3::vec4 operator/(const m3::vec4 &vec, float val);

m3::vec3 &operator*=(m3::vec3 &vec, float val);
m3::vec3 &operator/=(m3::vec3 &vec, float val);
m3::vec4 &operator*=(m3::vec4 &vec, float val);
m3::vec4 &operator/=(m3::vec4 &vec, float val);


// - add/sub vectors

m3::vec3 operator+(const m3::vec3 &v0, const m3::vec3 &v1);
m3::vec3 operator-(const m3::vec3 &v0, const m3::vec3 &v1);
m3::vec4 operator+(const m3::vec4 &v0, const m3::vec4 &v1);
m3::vec4 operator-(const m3::vec4 &v0, const m3::vec4 &v1);

m3::vec3 &operator+=(m3::vec3 &v0, const m3::vec3 &v1);
m3::vec3 &operator-=(m3::vec3 &v0, const m3::vec3 &v1);
m3::vec4 &operator+=(m3::vec4 &v0, const m3::vec4 &v1);
m3::vec4 &operator-=(m3::vec4 &v0, const m3::vec4 &v1);


// - dot/cross product

float operator*(const m3::vec3 &v0, const m3::vec3 &v1);
float operator*(const m3::vec4 &v0, const m3::vec4 &v1);
m3::vec3 operator%(const m3::vec3 &v0, const m3::vec3 &v1);
m3::vec4 operator%(const m3::vec4 &v0, const m3::vec4 &v1);


// - multiply matrices

namespace m3{ // to handle namespace problems for friend functions
m3::vec4 operator*(const m3::vec4 &vec, const m3::mat4 &mat);
m3::vec4 operator*(const m3::mat4 &mat, const m3::vec4 &vec);
}


// - multiply quaternions

m3::vec3 operator*(const m3::vec3 &vec, const m3::quat &quat);
m3::vec4 operator*(const m3::vec4 &vec, const m3::quat &quat);
m3::vec3 operator*(const m3::quat &quat, const m3::vec3 &vec);
m3::vec4 operator*(const m3::quat &quat, const m3::vec4 &vec);



// Mat Ops


// - multiply matrices

namespace m3 { // to handle namespace problems for friend functions
m3::mat4 operator*(const m3::mat4 &m0, const m3::mat4 &m1);
}


// - multiply quaternions

namespace m3 {
m3::mat4 operator*(const m3::mat4 &mat, const m3::quat &quat);
m3::mat4 operator*(const m3::quat &quat, const m3::mat4 &mat);
}



// Quat Ops


// - multiply quaternions

m3::quat operator*(const m3::quat &q0, const m3::quat &q1);

#endif // C++


#ifndef __cplusplus // C

#include <math.h>

extern "C" {

}

#endif // C


#endif