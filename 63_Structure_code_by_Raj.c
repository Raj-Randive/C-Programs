// Code By Raj

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[110];
    int marks;
    char fav_subject[50];
};

struct student Raj, Harry, Rohit, Mohan;

int main()
{
    int i;

    Raj.id = 1;
    Harry.id = 2;
    Rohit.id = 3;
    Mohan.id = 4;

    Raj.marks = 94;
    Harry.marks = 90;
    Rohit.marks = 95;
    Mohan.marks = 87;

    strcpy(Raj.fav_subject, "Computer Science");
    strcpy(Harry.fav_subject, "Science");
    strcpy(Rohit.fav_subject, "Maths");
    strcpy(Mohan.fav_subject, "Social Science");

    strcpy(Raj.name, "Raj Randive");
    strcpy(Harry.name, "Harry Shah");
    strcpy(Rohit.name, "Rohit Sharma");
    strcpy(Mohan.name, "Mohan Singh");

    printf("\nTo see Full details of students you have to enter their ids :\n\n   Raj's id   : 1\n   Harry's id : 2\n   Rohit's id : 3\n   Mohan's id : 4\n");
    printf("\nEnter id : ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("\nFull Name         : %s\n", Raj.name);
        printf("Id Number         : %d\n", Raj.id);
        printf("Marks Obtained    : %d\n", Raj.marks);
        printf("Favourite Subject : %s\n", Raj.fav_subject);
        break;

    case 2:
        printf("\nFull Name         : %s\n", Harry.name);
        printf("Id Number         : %d\n", Harry.id);
        printf("Marks Obtained    : %d\n", Harry.marks);
        printf("Favourite Subject : %s\n", Harry.fav_subject);
        break;

    case 3:
        printf("\nFull Name         : %s\n", Rohit.name);
        printf("Id Number         : %d\n", Rohit.id);
        printf("Marks Obtained    : %d\n", Rohit.marks);
        printf("Favourite Subject : %s\n", Rohit.fav_subject);
        break;

    case 4:
        printf("\nFull Name         : %s\n", Mohan.name);
        printf("Id Number         : %d\n", Mohan.id);
        printf("Marks Obtained    : %d\n", Mohan.marks);
        printf("Favourite Subject : %s\n", Mohan.fav_subject);
        break;

    default:
    printf("you have entered invalid id...!");
        break;
    }

    return 0;
}