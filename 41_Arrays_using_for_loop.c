#include <stdio.h>

int main()
{
    int marks[4];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the value of %d element of the Array : ", i);
        scanf("%d", &marks[i]);
    }
    
    printf("\n\n");

    for (int i = 0; i <= 4; i++)
    {
        printf("The value of %d element of Array is %d\n", i, marks[i]);
    }

    return 0;
}