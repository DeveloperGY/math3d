#include <iostream>

#include "vec4_tests.h"

int main(void)
{
    std::cout << "\nC++ Tests\n";

    if (!run_vec4_tests())
    {
        return -1;
    }    

    return 0;
}
