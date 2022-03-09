#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0, j = 0; i <= 15, j <= 12; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

// for loop always takes the command which is written afterwards i.e here it will print according to j<=12 as "j" is written after "i".

    return 0;
}