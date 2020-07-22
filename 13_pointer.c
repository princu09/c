#include <stdio.h>

int main()
{
    printf("Lets run about pointers\n");
    int a = 76;
    int *ptr = &a;

    printf("the address of pointer to a is %d\n", *ptr);

    //------------------------------Null Pointer-----------------------------------------------

    int *ptr2 = NULL;
    printf("the address of Null pointer is %d\n", ptr2);
    return 0;

    // Created By NorthFox Developers
}