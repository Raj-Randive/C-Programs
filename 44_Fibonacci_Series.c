#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_itterative(int n)
{
    int a=0, b=1, c;

    for (int i = 0; i < n - 1; i++)
    {
        c = a + b;    //b = a + b; 
        a = b;        //a = b - a;
        b = c;
    }
    return a;
}

int main()
{
    int number;

    printf("Enter the index to get Fibonacci Series : ");
    scanf("%d", &number);
    printf("The Value of Fibonacci Number at postion no. %d using iterative approach is :%d\n", number, fib_itterative(number));
    printf("The Value of Fibonacci Number at postion no. %d using recursive approach is :%d\n", number, fib_recursive(number));
    

    return 0;
}
