// NESTED SWITCH CONTROL STATEMENTS

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter Your Age (between 18-20) : ");
    scanf("%d", &age);

    printf("Enter Your Marks Out of 100: ");
    scanf("%d", &marks);

    printf("\n");

    switch (age)
    {
    case 18:
        printf("Your Age Is 18\n");


            switch (marks)
            {
            case 90:
                printf("Your Marks out of 100 Are : 90\n");
                break;
        
            default:
                printf("Your Marks Cannot be Determined\n");
            }



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