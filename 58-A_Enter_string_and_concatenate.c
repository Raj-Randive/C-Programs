// String Quick Quiz of allowing user to enter string and concatenate the string (version 2)...!!
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[20];
    char string3[20];
    char string4[10];

    printf("Enter the First person's name : ");
    gets(string1);
    printf("\n");
    printf("Enter the Second person's name : ");
    gets(string2);

    strcat(string1, " is a friend of ");   // joints first name and "is a friend of"
    strcpy(string3, strcat(string1, string2));  //joints second name and whole above sentence and then copies it to string3
    strcpy(string4, strcat(string3, "."));  // joints fullstop(.) and string3 and copies it in string4

    puts(string4);  // Printing string4

    return 0;
}