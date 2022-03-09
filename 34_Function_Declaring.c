#include <stdio.h>

int sum(int a, int b);//Function ko pehle declare kar diya. Now we can write function any where
                      //In this we have written function at last.

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The Sum is : %d", c);

    return 0;
}

int sum(int a, int b)
{                               //Making our own function
    return a + b;               //Making our own function
}                               //Making our own function