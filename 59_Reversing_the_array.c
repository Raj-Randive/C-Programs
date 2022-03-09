// This program is for try yourself...
#include <stdio.h>

// Target: 1,9,3,2,7,6,4
// Steps: 4,6,7,2,3,9,1
//        1,6,7,2,3,9,4
//        1,9,7,2,3,6,4
//        1,9,3,2,7,6,4

void arrayRev(int array[])
{
    int swap;
    for (int i = 0; i < 7/2; i++) 
    // or "i<4" as if agar pura kar diya then vo palat ke vapis sidha ho jaye ga
    {
        //swap arr[i] with arr[6-i]
        swap = array[i];   //Here first value od swap is "4".
        array[i] = array[6-i];  //Now "4" gets swaped by "1".
        array[6-i] = swap;   //And Here "1" gets swap to "4" as value of swap is "4" after first step..

    }
}

void arrayprint(int arr[])
{

    for (int i = 0; i < 7; i++)
    {
        printf("The Value of element %d is %d\n", i , arr[i]);
    }
}



int main()
{
    int arr[] = {4,6,7,2,3,9,1};
    printf("\nBefore Reversing the Array.\n");
    arrayprint(arr);

    printf("\nAfter Reversing the Array.\n");
    arrayRev(arr);
    arrayprint(arr);
    

    return 0;
}