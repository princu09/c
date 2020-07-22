// Question : Print Multiplication table of any number entered by user ?
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
    // Created By NorthFox Developers
}
/* like this type :
46 X 1 = 46
46 X 2 = 92
46 X 3 = 138
46 X 4 = 184
46 X 5 = 230
46 X 6 = 276
46 X 7 = 322
46 X 8 = 368
46 X 9 = 414
46 X 10 = 460
*/