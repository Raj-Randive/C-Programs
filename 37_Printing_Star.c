#include <stdio.h>

void Star_Printing()
{
    int a;
    printf("Enter the number you Want to Print (*) :  ");
    scanf("%d", &a);
    
    for ( int i = 0; i < a; i++)
    {
        printf("*");
    }
}