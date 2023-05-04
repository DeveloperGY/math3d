#include "../math3d.h"

m3::quat operator*(const m3::quat &l, const m3::quat &r)
{
    // Hamilton Product

    m3::quat result;

    result.data[0] = l.w()*r.w() - l.i()*r.i() - l.j()*r.j() - l.k()*r.k();
    result.data[1] = l.w()*r.i() + l.i()*r.w() + l.j()*r.k() - l.k()*r.j();
    result.data[2] = l.w()*r.j() - l.i()*r.k() + l.j()*r.w() + l.k()*r.i();
    result.data[3] = l.w()*r.k() + l.i()*r.j() - l.j()*r.i() + l.k()*r.w();

    return result;
}

m3::vec4 operator*(const m3::vec4 &l, const m3::quat &r)
{
    m3::quat ql(l);

    m3::quat rq = ql * r;

    m3::vec4 result(
        rq.i(),
        rq.j(),
        rq.k(),
        l.w()
    );

    return result;
}

m3::vec4 operator*(const m3::quat &l, const m3::vec4 &r)
{
    m3::quat qr(r);

    m3::quat rq = l * qr;

    m3::vec4 result(
        rq.i(),
        rq.j(),
        rq.k(),
        r.w()
    );

    return result;
}

m3::mat4 operator*(const m3::quat &l, const m3::mat4 &r)
{
    return l.to_mat4() * r;
}

m3::mat4 operator*(const m3::mat4 &l, const m3::quat &r)
{
    return l * r.to_mat4();
}