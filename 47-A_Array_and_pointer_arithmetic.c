// Array and Pointer Arithmetic

#include <stdio.h>

int main()
{
    // char a = '4';
    // char * ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);

    int arr[] = {15,22,38,42,56,69,73};
    int * arrayptr = arr;
    printf("The value at position 3 of array is %d\n\n", arr[3]);
    
    printf("The address of First element of array is %d\n", &arr[0]);
    printf("The address of First element of array is %d\n", arr);
    printf("The address of Second element of array is %d\n", &arr[1]);
    printf("The address of Second element of array is %d\n\n", arr + 1);
    // arr++; // Not valid as arr is a fixed constant...
    arrayptr++;

    printf("The value at address of First element of array is %d\n", *(&arr[0]) );
    printf("The value at address of First element of array is %d\n", *(arr) );
    printf("The value at address of Second element of array is %d\n", *(&arr[1]) );
    printf("The value at address of Second element of array is %d\n", *(arr + 1) );

    return 0;
}