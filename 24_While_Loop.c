#include <stdio.h>

int main()
{
    int i=1;
    while (i <= 45)
    {
        printf("%d\t", i);      // USE /t ot /n as per your requirements.
        i = i + 1;              //i=i+1  and  i++  are one & the same.
    }

    return 0;
}