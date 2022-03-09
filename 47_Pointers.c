#include <stdio.h>

int main()
{
    printf("\n");
    printf("Lets learn about Pointers.\n");
    int a = 56;
    int* ptra = &a;
    int* ptr2;
    int* ptr3 = NULL ;

    printf("The address of pointer to a is : %p\n" , &ptra); 
    printf("The address of pointer to a is : %x\n\n" , &ptra);

    printf("The address of a is : %x\n" , ptra);
    printf("The address of a is : %p\n" , ptra);
    printf("The address of a is : %p\n\n" , &a);     //address is printed.

    printf("The value of a is : %d\n" , *ptra);
    printf("The value of a is : %d\n\n" , a);

    printf("The address of some garbage is : %p\n" , ptr2);
    printf("The address of NULL Pointer is : %p\n" , ptr3);


// when we write "&ptr" then it means "address of ptr".  


    // %p is used to print pointer through printf.
    // & ka matlab hai ki "address of"
    return 0;
} 