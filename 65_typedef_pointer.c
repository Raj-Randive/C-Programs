//VERY IMPORTANT CONCEPT

#include <stdio.h>

int main()
{
    // int *a, b;
    typedef int* intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    //It successfully Runs...!!
    // if b = c, then it shows error.. 

    return 0;
}
