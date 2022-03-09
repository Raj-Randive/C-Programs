// *******EXERCISE*******

#include <stdio.h>

int main()
{
int num;

    // This are Comments
    
    printf("Enter the Number you want to print Multiplication Table of : ");
    scanf("%d", &num);
    printf("The Multiplication Table of Number %d is as follows :\n", num);
    {
        for(int i = 1; i <= 10; i++)

        { printf("%d * %d = %d\n", num, i, num*i);}

    }
 
    return 0;
} 