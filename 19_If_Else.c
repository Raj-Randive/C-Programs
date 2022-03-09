#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);
    printf("You have Entered %d as your Age\n", age);

    if( age>=18 )
    {
        printf("You Can Vote...!");
    }

    else if(age>=15)
    {
        printf("You can Vote for Kids...!");
    } 

    else if(age>=7)
    {
        printf("You can Vote for Babies...!");
    } 

    else
    {
        printf("Sorry You Cannot Vote.");
    }

    return 0;    
}