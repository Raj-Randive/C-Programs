#include <stdio.h>

int main()
{
    int i, age;
    for(i=0; i<=10; i++)
    {
        printf("%d\n Enter your Age : ", i);
        scanf("%d", &age);

        if(age>18)
        {
            continue; 
        }

        printf("We have not came accross any Continue Statements.\n");
        
    }

    return 0;
}