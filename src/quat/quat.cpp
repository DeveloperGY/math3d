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
    m3::vec4 n_axis = m3::vec4::normalized(axis);
    double radians = degrees * (M3_PI / 180.0f);

    double s = std::sin(radians / 2);

    this->data[0] = std::cos(radians / 2);
    this->data[1] = s * n_axis.x();
    this->data[2] = s * n_axis.y();
    this->data[3] = s * n_axis.z();

    return;
}

m3::quat::quat(const m3::vec4 &v)
{
    this->data[0] = 0;
    this->data[1] = v.x();
    this->data[2] = v.y();
    this->data[3] = v.z();

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



double m3::quat::norm(const m3::quat &q)
{
    return sqrt(pow(q.i(), 2) + pow(q.j(), 2) + pow(q.k(), 2) + pow(q.w(), 2));
}

m3::quat m3::quat::conjugate(const m3::quat &q)
{
    m3::quat result(q.w(), -q.i(), -q.j(), -q.k());

    return result;
}

m3::quat m3::quat::reciprocal(const m3::quat &q)
{
    m3::quat c = m3::quat::conjugate(q);
    double n2 = pow(m3::quat::norm(q), 2);

    m3::quat result(
        c.w() / n2,
        c.i() / n2,
        c.j() / n2,
        c.k() / n2
    );

    return result;
}

m3::quat m3::quat::normalized(const m3::quat &q)
{
    double n = m3::quat::norm(q);

    m3::quat result(
        q.w() / n,
        q.i() / n,
        q.j() / n,
        q.k() / n
    );

    return result;
}

m3::mat4 m3::quat::to_mat4(const m3::quat &qu)
{
    // HERE BE DRAGONS
    // - vector calculus and stuff according to wikipedia

    m3::quat q = m3::quat::normalized(qu); // forces unit quaternion

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

    m3::mat4 result;

    result.data[0] = 1 - 2*(yy+zz);
    result.data[1] =     2*(xy-wz);
    result.data[2] =     2*(xz+wy);
    result.data[3] =             0;

    result.data[4] =     2*(xy+wz);
    result.data[5] = 1 - 2*(xx+zz);
    result.data[6] =     2*(yz-wx);
    result.data[7] =             0;

    result.data[8] =     2*(xz-wy);
    result.data[9] =     2*(yz+wx);
    result.data[10]= 1 - 2*(xx+yy);
    result.data[11]=             0;

    result.data[12]=             0;
    result.data[13]=             0;
    result.data[14]=             0;
    result.data[15]=             1;

    return result;
}