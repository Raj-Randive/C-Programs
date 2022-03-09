// SWITCH CONTROL STATEMENTS

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter Your Age (between 15-20) : ");
    scanf("%d", &age);

    printf("Enter Your Marks Out of 100: ");
    scanf("%d", &marks);

    printf("\n");

    switch (age)
    {
    case 15:
        printf("Your Age Is 15\n");
        printf("Your Marks Out of 100 are : %d", marks);
        break;

    case 16:
        printf("Your Age Is 16\n");
        printf("Your Marks Out of 100 are : %d", marks);
        break;

    case 17:
        printf("Your Age Is 17\n");
        printf("Your Marks Out of 100 are : %d", marks);
        break;

    case 18:
        printf("Your Age Is 18\n");
        printf("Your Marks Out of 100 are : %d", marks);
        break;

    case 19:
        printf("Your Age Is 19\n");
        printf("Your Marks Out of 100 are : %d", marks);
        break;

    case 20:
        printf("Your Age Is 20\n");
        printf("Your Marks Out of 100 are : %d", marks);
        break;
    
    default:
        printf("Cannot Determine Your Age\n");
        printf("But Your Marks Out of 100 are : %d", marks);
    }

    return 0;
}