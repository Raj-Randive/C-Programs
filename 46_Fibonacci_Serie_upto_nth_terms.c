//Display fibonacci series upto Nth term

#include<stdio.h>

void fibonacciSeries(int n)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf("%d  ", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int term;

   printf("Enter the term: ");
   scanf("%d", &term);

   printf("The fibonacci series is: \n");

   fibonacciSeries(term);

   return 0;
}