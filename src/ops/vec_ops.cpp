#include "../math3d.h"

// vec ops

// - multiply/divide scalars

m3::vec3 operator*(const m3::vec3 &vec, float val)
{
    return m3::vec3(vec.x()*val, vec.y()*val, vec.z()*val);
}

m3::vec3 operator/(const m3::vec3 &vec, float val)
{
    return m3::vec3(vec.x()/val, vec.y()/val, vec.z()/val);
}

m3::vec4 operator*(const m3::vec4 &vec, float val)
{
    return m3::vec4(vec.x()*val, vec.y()*val, vec.z()*val, vec.w());
}

m3::vec4 operator/(const m3::vec4 &vec, float val)
{
    return m3::vec4(vec.x()/val, vec.y()/val, vec.z()/val, vec.w());
}


m3::vec3 &operator*=(m3::vec3 &vec, float val)
{
    vec = vec * val;
    return vec;
}

m3::vec3 &operator/=(m3::vec3 &vec, float val)
{
    vec = vec / val;
    return vec;
}

m3::vec4 &operator*=(m3::vec4 &vec, float val)
{
    vec = vec * val;
    return vec;
}

m3::vec4 &operator/=(m3::vec4 &vec, float val)
{
    vec = vec / val;
    return vec;
}