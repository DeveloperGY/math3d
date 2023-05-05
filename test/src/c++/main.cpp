#include <iostream>
#include "vec4_tests.h"


bool run_tests();

int main(void)
{
    std::cout << "\nC++ TESTING...\n\n";

    if (!run_tests())
    {
        std::cout << "\nC++ TESTING FAILED!\n";
        return -1;
    }    

    std::cout << "\nC++ TESTING SUCCEDED!\n";
    return 0;
}


bool run_tests()
{
    if (!run_vec4_tests())
    {
        return false;
    }

    return true;
}