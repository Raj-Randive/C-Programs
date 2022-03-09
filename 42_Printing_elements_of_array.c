#include <stdio.h>

int main()
{
    int marks[5] = {3, 56, 78, 90, 67};    // change the value of size inside array...!!
                                           // Its ok if we don't write that 5

    for (int i = 0; i <= 4; i++)
    {
        printf("The value of %d element of Array is %d\n", i, marks[i]);
    }

    return 0;
}