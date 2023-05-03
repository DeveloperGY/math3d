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