#include "../math3d.h"

// Quat Ops


// - multiply quaternions

m3::quat operator*(const m3::quat &q0, const m3::quat &q1)
{
    // Hamilton Product

    float w = q0.w()*q1.w() - q0.i()*q1.i() - q0.j()*q1.j() - q0.k()*q1.k();
    float i = q0.w()*q1.i() + q0.i()*q1.w() + q0.j()*q1.k() - q0.k()*q1.j();
    float j = q0.w()*q1.j() - q0.i()*q1.k() + q0.j()*q1.w() + q0.k()*q1.i();
    float k = q0.w()*q1.k() + q0.i()*q1.j() - q0.j()*q1.i() + q0.k()*q1.w();

    return m3::quat(w, i, j ,k);
}