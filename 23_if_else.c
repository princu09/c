#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("You have entered %d as your age.\n", age);
    if (age > 18)
    {
        printf("You can vote !! :)");
    }

    else if (age > 10)
    {
        printf("You are between 10 to 18 and you can't vote");
    }

    else
    {
        printf("You can't vote Sorry :)");
    }
    return 0;

    // Created By NorthFox Developers
}
