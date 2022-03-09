// Call by reference...!!
// This code is written by me...!!
#include <stdio.h>

void addsubtract(int *x, int *y)
{
    int store = *x;
    *x = *x + *y;
    *y = (store - *y);
}

int main()
{
    int a;
    int b;

    printf("Enter Number a : ");
    scanf("%d", &a);
    printf("Enter Number b : ");
    scanf("%d", &b);

    addsubtract(&a, &b);
    printf("\n");
    printf("The Addition of a and b is : %d\n", a);
    printf("The Subtraction of a and b is : %d\n", b);

    return 0;
}