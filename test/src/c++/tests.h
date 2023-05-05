#ifndef M3_TESTS_H
#define M3_TESTS_H

#include <string>
#include <cstdio>

inline bool test(bool (*f)(void), std::string name) {
    const char *cname = name.c_str();
    
    printf("[%s]: RUNNING...\n", cname);
    
    if (!f())
    {
        printf("[%s]: FAIL\n", cname);
        return false;
    }

    printf("[%s]: SUCCESS\n", cname);

    return true;
}

#endif