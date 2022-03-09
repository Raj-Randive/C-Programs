//2-D Array Coding
#include <stdio.h>

int main()
{
    int marks[2][4] = {{3, 2, 8, 4},
                       {1, 6, 9, 7}};

    printf("\n");
    printf("The values of array in matrix form are :\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("%d ", marks[i][j]);
            //when this loop is completed then it will come out for the 2nd row...!!
        }

        printf("\n");
    }

printf("\n");

    return 0;
}