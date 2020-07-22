#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "mohan";
    char s2[] = "rohan";
    char s3[54];

    strcpy(s3, strcat(s1, s2));
    printf("This is copied sting in s3 open and check it : ");
    puts(s3);
    return 0;
    // Created By NorthFox Developers
}