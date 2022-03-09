// How to print string...!!
#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'R', 'A', 'J', '\0'};
    char str[3] = "Raj"; // Here no need of \0 as it already understands to terminte..
    // writing in (" ") is said to be Null Terminated Character Array...

    //By Putting 3 in [] we get a garbage value as it stops at 3 characters and there is no space for \0 to terminated the chracter.

    printStr(str);
    return 0;
}