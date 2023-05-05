#include "vec4_tests.h"

bool run_vec4_tests()
{
    bool result = true;

    if(!test(default_vec4, "Vec4 Default Constructor"))
    {
        result = false;
    }
    if(!test(double4_vec4, "Vec4 Double x4 Constructor"))
    {
        result = false;
    }
    if(!test(doubleArr_vec4, "Vec4 Double Array Constructor"))
    {
        result = false;
    }
    if(!test(vec4_vec4, "Vec4 Copy Constructor"))
    {
        result = false;
    }

    return true;
}

bool default_vec4()
{
    m3::vec4 v;

    if (v.w() != 1 || v.x() != 0 || v.y() != 0 || v.z() != 0)
    {
        return false;
    }

    return true;
}

bool double4_vec4()
{
    m3::vec4 v(3.0, 4.0, 5.0 ,1.0);

    if (v.w() != 1 || v.x() != 3 || v.y() != 4 || v.z() != 5)
    {
        return false;
    }

    return true;
}

bool doubleArr_vec4()
{
    m3::vec4 v({3.0, 4.0, 5.0 ,1.0});

    if (v.w() != 1 || v.x() != 3 || v.y() != 4 || v.z() != 5)
    {
        return false;
    }

    return true;
}

bool vec4_vec4()
{
    m3::vec4 old_v(3.0, 4.0, 5.0 ,1.0);

    m3::vec4 v(old_v);

    if (v.w() != 1 || v.x() != 3 || v.y() != 4 || v.z() != 5)
    {
        return false;
    }

    return true;
}