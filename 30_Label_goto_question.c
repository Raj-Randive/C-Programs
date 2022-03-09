#include <stdio.h>

int main()
{
    // label:
    //     printf("We are inside label\n");
    //     goto end;
    // printf("Hello World\n");

    //     goto label;

    // end:
    int num;
    for (int i = 0; i <= 6; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j <= 2; j++)
        {
            printf("OR Enter 0 to EXIT.\n");
            printf("Enter the Number : ");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
        }
    
    }

end:

    return 0;
}