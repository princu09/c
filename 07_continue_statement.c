#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        if (age < 18)
        {
            continue;
        }

        printf("Welcome to our programme.. congrates !! your age is 18+ :) ");
        break;
    }
    return 0;
    // Created By NorthFox Developers
}
