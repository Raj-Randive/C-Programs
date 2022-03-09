//With argument and without return value

#include <stdio.h>

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');  //As star is a character.
    }
    
//Double quote is for string.                      
//Single quote is for character.
    
}

int main()
{
    printstar(10);

    return 0;
}