#include <stdio.h>

int main()
{
    int m, s;
    printf("Enter Your Marks out of 100 in Maths Subject : ");
    scanf("%d", &m);
    printf("\n");

    printf("Enter Your Marks out of 100 in Science Subject : ");
    scanf("%d", &s);
    printf("\n");

    printf("Your Marks out of 100 in Maths Subject are : %d", m);
    printf("\n");
    printf("Your Marks out of 100 in Science Subject are : %d", s);
    printf("\n");
    printf("\n");

    if(m>=90, s>=90)
    {
        printf("Congralations you have Passed both Exams with Excellent Marks.");
    }

    else if(m>=35 && s>=35)
    {
        printf("You have Successfully Passed both the Exams.");
    } 

    else if(m>=35 && s<=35)
    {
        printf("You have Passed Only in Maths Subject.");
    } 

    else if(m<=35 && s>=35)
    {
        printf("You have Passed Only in Science Subject.");
    } 

    else
    {
        printf("You have not Passed any of the Exam. Better Luck Next Time.");
    }
    
    return 0;    
}
