//  String Functions...!!
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Raj";
    char s2[] = "Harry";
    char s3[60];

    printf("\n strcat() \n");

    // printf("%s\n\n", strcat(s1,s2));
    // puts(strcat(s1, s2));

    printf("\n strlen() \n");

    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));

    printf("\n strrev() \n");

    // printf("The reversed string s1 is :- ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is :- ");
    // puts(strrev(s2));

    printf("\n\n");

    // s3 = strcat(s1, s2);  // Can't do this as s3 is an array so we have to use strcpy to copy string in s3

    printf("\n strcpy() \n");

    // puts( strcpy(s3, strcat(s1, s2)) );

    printf("\n strcmp() \n");

    // printf("The strcmp for s1, s2 returned is %d", strcmp(s1, s2));

    return 0;
}
    



// allow user to enter two strings and then concatenate them by saying that 
// str1 is a friend of str2
