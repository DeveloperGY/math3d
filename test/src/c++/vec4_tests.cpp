#include "vec4_tests.h"

bool run_vec4_tests()
{
    if(!default_vec4())
    {
        return false;
    }

    return true;
}

bool default_vec4()
{
    printf("[Default Vec4]: RUNNING...\n");

    m3::vec4 v;

    if (v.w() != 1 || v.x() != 0 || v.y() != 0 || v.z() != 0)
    {
        printf("[Defualt Vec4]: FAIL\n");
        return false;
    }

    printf("[Default Vec4]: SUCCESS\n");

    return true;
}