#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3 ");
        switch (marks)
        {
        case 45:
            printf(" and Your marks are 45");
            break;

        default:
            printf("your marks are not 45");
        }
        break;

    case 13:
        printf("The age is 13 ");
        switch (marks)
        {
        case 45:
            printf(" and Your marks are 45");
            break;

        default:
            printf("and your marks are not 45");
        }
        break;

    case 23:
        printf("The age is 23 ");
        switch (marks)
        {
        case 45:
            printf("and Your marks are 45");
            break;

        default:
            printf("and your marks are not 45");
        }
        break;

    default:
        printf("Age is not 3, 13 or 23\n");
    }

    return 0;

    // Created By NorthFox Developers
}