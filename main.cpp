#include "scope_exit.h"
#include <cstdio>

int main()
{
    SCOPE_EXIT { std::printf("exiting\n"); };
    SCOPE_EXIT { std::printf(" world\n"); };
    std::printf("hello");
    return 0;
}

