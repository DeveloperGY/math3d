#include "../math3d.h"

m3::quat::quat(float w, float i, float j, float k)
{
    this->data[0] = w;
    this->data[1] = i;
    this->data[2] = j;
    this->data[3] = k;

    return;
}

m3::quat::quat(float degrees, const m3::vec3 &axis)
{
    float radians = degrees * (M3_PI / 180.0f);

    float s = std::sin(radians / 2.0f);

    m3::vec3 n_axis = m3::vec3::normalize(axis);

    this->data[0] = std::cos(radians/2);
    this->data[1] = s * n_axis.x();
    this->data[2] = s * n_axis.y();
    this->data[3] = s * n_axis.z();

    return;
}

m3::quat::quat(const m3::quat &q)
{
    this->data[0] = q.w();
    this->data[1] = q.i();
    this->data[2] = q.j();
    this->data[3] = q.k();

    return;
}


float m3::quat::w() const
{
    return this->data[0];
}

float m3::quat::i() const
{
    return this->data[1];
}

float m3::quat::j() const
{
    return this->data[2];
}

float m3::quat::k() const
{
    return this->data[3];
}


m3::quat m3::quat::conjugate(const m3::quat &quat)
{
    return m3::quat(quat.w(), -quat.i(), -quat.j(), -quat.k());
}

float m3::quat::norm(const m3::quat &quat)
{
    float w = std::pow(quat.w(), 2);
    float i = std::pow(quat.i(), 2);
    float j = std::pow(quat.j(), 2);
    float k = std::pow(quat.k(), 2);

    return std::sqrt(w+i+j+k);
}

m3::quat m3::quat::normalize(const m3::quat &quat)
{
    float n = m3::quat::norm(quat);

    return m3::quat(quat.w()/n, quat.i()/n, quat.j()/n, quat.k()/n);
}

m3::quat m3::quat::inverse(const m3::quat &quat)
{
    float n_2 = std::pow(m3::quat::norm(quat), 2);
    m3::quat conj = m3::quat::conjugate(quat);

    return m3::quat(conj.w()/n_2, conj.i()/n_2, conj.j()/n_2, conj.k()/n_2);
}

m3::mat4 m3::quat::as_mat4(const m3::quat &quat)
{
    // HERE BE DRAGONS
    // - vector calculus and stuff according to wikipedia

    m3::quat q = m3::quat::normalize(quat); // forces unit quaternion

    // precompute
    double xx = q.i() * q.i();
    double yy = q.j() * q.j();
    double zz = q.k() * q.k();
    double xy = q.i() * q.j();
    double xz = q.i() * q.k();
    double yz = q.j() * q.k();
    double wx = q.w() * q.i();
    double wy = q.w() * q.j();
    double wz = q.w() * q.k();

    return m3::mat4(
        1 - 2*(yy+zz),     2*(xy-wz),     2*(xz+wy), 0,
            2*(xy+wz), 1 - 2*(xx+zz),     2*(yz-wx), 0,
            2*(xz-wy),     2*(yz+wx), 1 - 2*(xx+yy), 0,
                    0,             0,             0, 1
    );
}