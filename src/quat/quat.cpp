#include "../math3d.h"

m3::quat::quat()
{
    this->data[0] = 0; // w
    this->data[1] = 1; // i
    this->data[2] = 0; // j
    this->data[3] = 0; // k
    return;
}

m3::quat::quat(double degrees, m3::vec4 axis)
{
    m3::vec4 n_axis = axis.normalized();
    double radians = degrees * (M3_PI / 360.0f); // divides by two because of quaternion magic

    double s = std::sin(radians);

    this->data[0] = std::cos(radians);
    this->data[1] = s * n_axis.x();
    this->data[2] = s * n_axis.y();
    this->data[3] = s * n_axis.z();

    return;
}

double m3::quat::w() const
{
    return this->data[0];
}

double m3::quat::i() const
{
    return this->data[1];
}

double m3::quat::j() const
{
    return this->data[2];
}

double m3::quat::k() const
{
    return this->data[3];
}