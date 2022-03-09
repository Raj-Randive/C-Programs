#include <stdio.h>

int b = 35; // Global Variable

int func1(int b1)
{
    printf("The value of b inside func1 is :%d\n", b);
    // printf("The address of b inside func1 is : %d\n", &b);
    return b1;
}

int main()
{
    int b = 324;
    // printf("The address of b inside main is : %d\n", &b);
   func1(b);

    return 0;
}