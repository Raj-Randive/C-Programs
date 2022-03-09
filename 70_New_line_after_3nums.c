#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter how many numbers do you want to print : ");
    scanf("%d", &num);

    for (int i=1; i <= num; i++)
    {
        
        int m=i-1;
        if (m%3==0)
        {
            printf("\n");
        }

        
        printf("%d\t", i);

    }

    return 0;
}   