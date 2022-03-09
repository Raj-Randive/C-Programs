#include <stdio.h>

int b = 35; // Global Variable

int func1(int b)
{
    printf("The value of b inside func1 is :%d\n", b);
    // printf("The address of b inside func1 is : %d\n", &b);
    return b*10;
}

int main()
{
    int b = 324;
    // printf("The address of b inside main is : %d\n", &b);

    printf("The value of b is from main as local variable have greater precedence than global variable\n");

    int val = func1(b);
    printf("The value of func1 is %d", val);

    return 0;
}