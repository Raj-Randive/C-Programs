// Different ways to print string...
#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n"); 
}

int main()
{
    char str[56];
    gets(str);

    printf("Using custom function printStr : ");
    printStr(str);

    printf("Using printf : %s\n", str);
    
    printf("Using puts :");
    puts(str);
   
    return 0;
}