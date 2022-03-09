// printing 3d array...!!
#include <stdio.h>

void func(int array[3][3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The value at %d, %d, %d element of array is %d\n", i, j, k, array[i][j][k]);
            }
            
        }
        
    }
    
}

int main()
{
    int arr[3][3][3] = { 
                            {{11,12,13}, {14,15,16}, {17,18,19}},  //elements of block 1
                            {{20,21,22}, {23,24,25}, {26,27,28}},  //elements of block 2
                            {{29,30,31}, {32,33,34}, {35,36,37}}   //elements of block 3

                        };
    
    func(arr);

    return 0;
}