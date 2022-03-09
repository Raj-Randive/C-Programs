#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_subject[20];
    char name[30];
};

int main()
{
    struct Student s1;
    s1.id = 1;
    s1.marks = 99;
    strcpy(s1.fav_subject, "Computer Science");
    strcpy(s1.name, "RAJ");  // We can print arrays only by strcpy function....!!
    
    printf("The Id is : %d\n", s1.id);
    printf("The Name is : %s\n", s1.name);
    printf("The Marks is : %d\n", s1.marks);
    printf("The Fav. Subject is : %s\n", s1.fav_subject);

    return 0;
}