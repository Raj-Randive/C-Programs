// String Quick Quiz of allowing user to enter string and concatenate the string (version 1)...
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[4];
    char s2[6];
    char s3[0];

    printf("Enter the 1st name : ");
    scanf("%s", &s1);

    printf("Enter the 2nd name : ");
    scanf("%s", &s2);

    strcat(s1," is a friend of ");
    // puts(strcat(s1, s2));

    strcpy(s3, strcat(s1, s2));
    puts(s3); // Puts function  Prints "s3"...!!

    return 0;
}