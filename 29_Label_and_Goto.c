#include <stdio.h>

int main()
{
    label:
        printf("We are inside label\n");
        goto end;

        printf("Hello World\n");
        
        // goto label;

    end:
    return 0;
}