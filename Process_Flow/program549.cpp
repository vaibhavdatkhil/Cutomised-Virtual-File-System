#include<stdio.h>
#include<stdlib.h>

// Conditional preprocessing
int mian()
{
    #ifdef _WIN32
        system("dir");
    #else
        system("ls");
    #endif

    return 0;
}
