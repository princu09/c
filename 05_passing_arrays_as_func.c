#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d \n", i, array[i]);
    }

    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()

    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d \n", i, ptr[i]);
    }
    *(ptr + 2) = 652;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d , %d is %d\n", i, j, arr[i][j]);
        }
    }
}

/* //------------------Single dimension Array------------------------
int main()
{
    int arr[] = {23, 56, 2, 58};

// ---------------------func1 call--------------------------
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);

// ---------------------func2 call--------------------------
    // func2(arr);
    // printf("\n");
    // func2(arr);

    return 0;
}*/

//------------------Multi dimension Array------------------------

int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    func3(arr);
    // Created By NorthFox Developers
}