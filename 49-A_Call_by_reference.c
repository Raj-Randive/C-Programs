// Call by reference
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    a = 62;
    b = 97;
    printf("The value of a & b before swaping is : %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of a & b after swaping is : %d and %d", a, b);

    return 0;
}