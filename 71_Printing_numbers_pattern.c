#include <stdio.h>

int main()
{
    int i, j, k, l;

    l = 1;

    for(i=1; i<=4; i++)
    {
        for(j=4-i; j>=1; j--)
        {
            printf(" ");
        }

        for(k=1; k<=i; k++)
        {
            printf("%d ", l);
            l++;
        }
        printf("\n");
    }

    return 0;
}