#include "../math3d.h"

m3::quat::quat()
{
    this->data[0] = 0; // w
    this->data[1] = 1; // i
    this->data[2] = 0; // j
    this->data[3] = 0; // k

    return;
}

m3::quat::quat(double w, double i, double j, double k)
{
    this->data[0] = w;
    this->data[1] = i;
    this->data[2] = j;
    this->data[3] = k;

    return;
}

m3::quat::quat(double degrees, const m3::vec4 &axis)
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

m3::quat::quat(const m3::vec4 &v)
{
    m3::vec4 nv = v.normalized();

    this->data[0] = 0;
    this->data[1] = nv.x();
    this->data[1] = nv.y();
    this->data[1] = nv.z();

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

double m3::quat::norm() const
{
    return sqrt(pow(this->i(), 2) + pow(this->j(), 2) + pow(this->k(), 2) + pow(this->w(), 2));
}

m3::quat m3::quat::conjugate() const
{
    m3::quat result(this->w(), -this->i(), -this->j(), -this->k());

    return result;
}

m3::quat m3::quat::reciprocal() const
{
    m3::quat c = this->conjugate();
    double n2 = pow(this->norm(), 2);

    m3::quat result(
        c.w() / n2,
        c.i() / n2,
        c.j() / n2,
        c.k() / n2
    );

    return result;
}

m3::quat m3::quat::normalized() const
{
    double n = this->norm();

    m3::quat result(
        this->w() / n,
        this->i() / n,
        this->j() / n,
        this->k() / n
    );

    return result;
}

m3::quat & m3::quat::normalize()
{
    double n = this->norm();

    this->data[0] /= n;
    this->data[1] /= n;
    this->data[2] /= n;
    this->data[3] /= n;

    return *this;
}

m3::mat4 m3::quat::to_mat4() const
{
    // HERE BE DRAGONS
    // - vector calculus and stuff according to wikipedia

    m3::quat q = this->normalized(); // forces unit quaternion

    // precompute
    double ii = q.i() * q.i();
    double jj = q.j() * q.j();
    double kk = q.k() * q.k();
    double ij = q.i() * q.j();
    double ik = q.i() * q.k();
    double jk = q.j() * q.k();
    double wi = q.w() * q.i();
    double wj = q.w() * q.j();
    double wk = q.w() * q.k();

    double data[16] = {
        1-2*(jj + kk),   2*(ij-wk),   2*(ik+wj), 0.0,
            2*(ij+wk), 1-2*(ii-kk),   2*(jk-wi), 0.0,
            2*(ik-wj),   2*(jk+wi), 1-2*(ii+jj), 0.0,
                  0.0,         0.0,         0.0, 1.0
    };

    m3::mat4 result(data);

    return result;
}