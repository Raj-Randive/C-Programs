
#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*"); // jab tak ye for loop khatam nahi ho jata tab tak bahar vala loop nahi chalega....!!
        }

        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows, input;
    printf("Which pattern do you wish to See : Triangular or Reversed Triangular Pattern ?\n\n");
    printf("Press 1. for Triangular Star Pattern &\n      2. for Reversed Trianguar Star Pattern");
    printf("\n\n");
    printf("Enter your input (1 or 2) : ");
    scanf("%d", &input);
    
    switch (input)
    {
    case 1:
        printf("You have selected to print Triangular Star Pattern.\n");
        printf("How many rows do you want? : ");
        scanf("%d", &rows);
        starpattern(rows);
        goto end;

    case 2:
        printf("You have selected to print Reversed Triangular Star Pattern.\n");
        printf("How many rows do you want? : ");
        scanf("%d", &rows);
        reversestarpattern(rows);
        goto end;

    default:
        printf("You have Entered Invalid Input...!!");
        break;

    }
end:

    return 0;
}