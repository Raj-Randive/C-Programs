#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}


int main()
{
    int num;
    printf("Enter the Number you want the factorial of : ");
    scanf("%d", &num);
    printf("The Factorial of %d is %d\n", num, factorial(num));

    return 0;
}