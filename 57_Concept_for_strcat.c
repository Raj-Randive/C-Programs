//IMPORTANT CONCEPT FOR strcat

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";

    (strcat(s1, s2)); //If we write str(s1, s2) then it implies that "s2 ko s1 ke sath chapka do"...
    puts(s1);
    puts(s2);

    return 0;
}
