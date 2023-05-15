#include "../math3d.h"

m3::mat4::mat4(
    float x0, float y0, float z0, float w0,
    float x1, float y1, float z1, float w1,
    float x2, float y2, float z2, float w2,
    float x3, float y3, float z3, float w3
)
{
    this->data[0] = x0;
    this->data[1] = y0;
    this->data[2] = z0;
    this->data[3] = w0;

    this->data[4] = x1;
    this->data[5] = y1;
    this->data[6] = z1;
    this->data[7] = w1;

    this->data[8] = x2;
    this->data[9] = y2;
    this->data[10] = z2;
    this->data[11] = w2;

    this->data[12] = x3;
    this->data[13] = y3;
    this->data[14] = z3;
    this->data[15] = w3;

    return;
}


/**
 * Utility
 */

m3::mat4 m3::mat4::translation_matrix(float x, float y, float z)
{
    return m3::mat4(
        1, 0, 0, x,
        0, 1, 0, y,
        0, 0, 1, z,
        0, 0, 0, 1
    );
}

m3::mat4 m3::mat4::rotation_x_matrix(float degrees)
{
    float radians = degrees * (M3_PI / 180.0f);

    float s = std::sin(radians);
    float c = std::cos(radians);

    return m3::mat4(
        1, 0,  0, 0,
        0, c, -s, 0,
        0, s,  c, 0,
        0, 0,  0, 1
    );
}

m3::mat4 m3::mat4::rotation_y_matrix(float degrees)
{
    float radians = degrees * (M3_PI / 180.0f);

    float s = std::sin(radians);
    float c = std::cos(radians);

    return m3::mat4(
         c, 0, s, 0,
         0, 1, 0, 0,
        -s, 0, c, 0,
         0, 0, 0, 1
    );
}

m3::mat4 m3::mat4::rotation_z_matrix(float degrees)
{
    float radians = degrees * (M3_PI / 180.0f);

    float s = std::sin(radians);
    float c = std::cos(radians);

    return m3::mat4(
        c, -s, 0, 0,
        s,  c, 0, 0,
        0,  0, 1, 0,
        0,  0, 0, 1
    );
}

m3::mat4 m3::mat4::scale_matrix(float x, float y, float z)
{
    return m3::mat4(
        x, 0, 0, 0,
        0, y, 0, 0,
        0, 0, z, 0,
        0, 0, 0, 1
    );
}

m3::mat4 m3::mat4::change_of_basis_matrix(m3::vec3 right, m3::vec3 up, m3::vec3 forward)
{
    return m3::mat4(
          right.x(),   right.y(),   right.z(), 0,
             up.x(),      up.y(),      up.z(), 0,
        forward.x(), forward.y(), forward.z(), 0,
                  0,           0,           0, 1
    );
}

m3::mat4 m3::mat4::projection_matrix(float vfov_degrees, float aspect_ratio, float near, float far)
{
    float vfov = vfov_degrees * (M3_PI / 180);

    double top = near * std::tan(vfov / 2);
    double bottom = -top;
    double right = top * aspect_ratio;
    double left = -right;

    double m00 = (2 * near) / (right - left);
    double m02 = (right + left) / (right - left);
    double m11 = (2 * near) / (top - bottom);
    double m12 = (top + bottom) / (top - bottom);
    double m22 = (-(far + near)) / (far - near);
    double m23 = (-2 * far * near) / (far - near);


    return m3::mat4(
        m00,   0, m02,   0,
          0, m11, m12,   0,
          0,   0, m22, m23,
          0,   0,  -1,   0
    );
}