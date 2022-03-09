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

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The Value at %d is %d\n", i, ptr[i]);
        printf("The Value at %d is %d\n", i, *(ptr + i));
    }

    *(ptr + 2) = 6547;

}

int main()
{
    int arr[] = {23, 13, 3, 4};
    // printf("The Value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The Value at index 0 is %d\n", arr[0]);
    func2(arr);
    printf("\n");
    func2(arr);
    return 0;
}