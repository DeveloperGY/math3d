#include "../math3d.h"

m3::mat4::mat4()
{
    this->data[0] = 1;
    this->data[1] = 0;
    this->data[2] = 0;
    this->data[3] = 0;

    this->data[4] = 0;
    this->data[5] = 1;
    this->data[6] = 0;
    this->data[7] = 0;

    this->data[8] = 0;
    this->data[9] = 0;
    this->data[10] = 1;
    this->data[11] = 0;

    this->data[12] = 0;
    this->data[13] = 0;
    this->data[14] = 0;
    this->data[15] = 1;

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

m3::mat4::mat4(double a, double b, double c, double d, 
               double e, double f, double g, double h, 
               double i, double j, double k, double l, 
               double m, double n, double o, double p)
{
    this->data[0] = a;
    this->data[1] = b;
    this->data[2] = c;
    this->data[3] = d;
    this->data[4] = e;
    this->data[5] = f;
    this->data[6] = g;
    this->data[7] = h;
    this->data[8] = i;
    this->data[9] = j;
    this->data[10] = k;
    this->data[11] = l;
    this->data[12] = m;
    this->data[13] = n;
    this->data[14] = o;
    this->data[15] = p;
    return;
}

m3::mat4 m3::mat4::gen_rotationX(double degrees)
{
    double radians = degrees * (M3_PI / 180.0f);

    double s = std::sin(radians);
    double c = std::cos(radians);

    m3::mat4 result(
        1.0, 0.0, 0.0, 0.0,
        0.0,   c,  -s, 0.0,
        0.0,   s,   c, 0.0,
        0.0, 0.0, 0.0, 1.0
    );

    return result;
}

m3::mat4 m3::mat4::gen_rotationY(double degrees)
{
    double radians = degrees * (M3_PI / 180.0f);

    double s = std::sin(radians);
    double c = std::cos(radians);

    m3::mat4 result(
          c, 0.0,   s, 0.0,
        0.0, 1.0, 0.0, 0.0,
         -s, 0.0,   c, 0.0,
        0.0, 0.0, 0.0, 1.0
    );

    return result;
}

m3::mat4 m3::mat4::gen_rotationZ(double degrees)
{
    double radians = degrees * (M3_PI / 180.0f);

    double s = std::sin(radians);
    double c = std::cos(radians);

    m3::mat4 result(
          c,  -s, 0.0, 0.0,
          s,   c, 0.0, 0.0,
        0.0, 0.0, 1.0, 0.0,
        0.0, 0.0, 0.0, 1.0
    );

    return result;
}

m3::mat4 m3::mat4::gen_translation(double x, double y, double z)
{
    return m3::mat4(
        1.0, 0.0, 0.0,   x,
        0.0, 1.0, 0.0,   y,
        0.0, 0.0, 1.0,   z,
        0.0, 0.0, 0.0, 1.0
    );
}

m3::mat4 m3::mat4::gen_scale(double x, double y, double z)
{
    return m3::mat4(
          x, 0.0, 0.0, 0.0,
        0.0,   y, 0.0, 0.0,
        0.0, 0.0,   z, 0.0,
        0.0, 0.0, 0.0, 1.0
    );
}