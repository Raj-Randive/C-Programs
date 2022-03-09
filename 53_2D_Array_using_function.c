#include <stdio.h>

// int func1(int array[])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The Value at %d is %d\n", i, array[i]);
//     }

//     // array[0] = 432;  Very important point that if you change any value here, it gets reflected in main()..

//     return 0;
// }

// void func2(int *ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         // printf("The Value at %d is %d\n", i, ptr[i]);
//         printf("The Value at %d is %d\n", i, *(ptr + i));
//     }

//     *(ptr + 2) = 6547;

// }

void func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The Value at %d, %d is %d\n", i, j, array[i][j]);
        }
    }
}

int main()
{
    int arr[2][2] = {{23, 13}, {5, 17}};
    // printf("The Value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The Value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);

    func3(arr);

    return 0;
}