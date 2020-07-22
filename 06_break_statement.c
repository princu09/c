#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        if (age > 18)
        {
            break;
        }
    }
    printf("You Enter Correct Age !! Thank You");
    return 0;
    // Created By NorthFox Developers
}
