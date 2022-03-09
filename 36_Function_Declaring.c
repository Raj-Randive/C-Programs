//Without argument and with return value

#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a Number : ");
    scanf("%d", &i);
    return i;
}



int main()
{
    int a;
    a = takenumber();

    printf("The Number Entered is %d", a);

    return 0;
}