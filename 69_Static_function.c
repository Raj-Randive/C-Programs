#include <stdio.h>

int b = 35; // Global Variable

int retro()
{
    return 40*3;
}

int func1(int b1)
{
    static int myvar = 98; //If we donot write = 0 to myvar then there will be no change in output...!!
    //Remove this static and see what is the difference...!!
    //It requires a constant value, it will not accept any function call...!!
    printf("The value of myvar is : %d\n", myvar);
    myvar++;

    return b1 + myvar;
}

int main()
{
    int b = 355;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    return 0;
}