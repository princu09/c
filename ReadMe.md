## C Language Free Source code By NorthFox Developers

#### Join Our Telegram channel [ProgHub09](http://t.me/ProgHub09) and Also Download Our App.

![Logo Here](https://github.com/princu09/premiumaccounts/blob/master/Logo%20NFG.jpg?raw=true)

##### check All Files List :


| File Name & Link   | File Name & Link   | File Name & Link   | File Name & Link
------------- | ------------- | ----------- | ------------
[00 Hello World !](#hello-world)  | [01 Add](#add)   | [02 Array](#array) | [03 Arithmatic ](#arithmatic)
[04 Array of Pointer Arithmatic](#array-of-pointer-arithmatic)  | [05 Passing Array as Function](#passing-array-as-function)   | [06 Break Statement](#break-statement) | [07 Continue Statement](#continue-statement)
[08 Call Value](#call-value)  | [09 Do While Loop](#do-while-loop)   | [10 For Loop](#for-loop) | [11 While Loop](#while-loop)
[12 Switch Case](#switch-case)  | [13 Pointer](#pointer)   | [14 Convertor](#convertor) | [15 Copy String](#copy-string)
[16 Functions](#functions-1)  | [17 Star Pattern](#star-pattern)   | [18 String](#string) | [19 String Length](#string-length)
[20 Recursive Function](#recursive-function)  | [21 Go to Statement](#go-to-statement) | [22 Format Specifiers And Escape Sequences](#format-specifiers-and-escape-sequences)| [23 If Else](#if-else)
[24 Size](#size)  | [25 TypeCasting Float](#typeCasting-float) | [26 TypeCasting Intager](#typeCasting-intager)| [28 Print Table](#print-table)



<br>
<br>

#### Hello World !

* File Name in Git : <b>[00_hello_world.c](http://github.com/princu09/c/blob/master/00_hello_world.c)</b>

```
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hello World!");
    return 0;
}
```


#### Add

* File Name in Git : <b>[01_add.c](http://github.com/princu09/c/blob/master/01_add.c)</b>

```
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter num a\n");
    scanf("%d", &a);

    printf("Enter num b\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);

    return 0;
    
}
```

#### Array

* File Name in Git : <b>[02_arry.c](http://github.com/princu09/c/blob/master/02_arry.c)</b>

```
#include <stdio.h>

int main()
{
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 3, 3}};

    //-----------------------1D Array-------------------------------
    // for(int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }

    //-----------------------2D Array-------------------------------

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            // printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;

}
```

#### Arithmatic

* File Name in Git : <b>[03_arithmatic.c](http://github.com/princu09/c/blob/master/03_arithmatic.c)</b>

```
#include <stdio.h>

int main()
{
    int a;
    float b;
    a = 35;
    b = 6.5;
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);

    return 0;

}
```


#### Array of Pointer Arithmatic

* File Name in Git : <b>[04_array_pointer_arithmetic.c](http://github.com/princu09/c/blob/master/04_array_pointer_arithmetic.c)</b>

```
#include <stdio.h>
int main()
{
    /* 
    char a = '3';
    char *ptra = &a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    ptra--;
    printf("%d\n",ptra+2);
*/
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Value of the position 4 of the array is %d\n", arr[4]);
    printf("The address of first element of the array is %d\n", &arr[1]);

    return 0;

}
```

#### Passing Array as Function

* File Name in Git : <b>[05_passing_arrays_as_func.c](http://github.com/princu09/c/blob/master/05_passing_arrays_as_func.c)</b>

```
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
}
```


#### Break Statement

* File Name in Git : <b>[06_break_statement.c](http://github.com/princu09/c/blob/master/06_break_statement.c)</b>

```
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
}
```


#### Continue Statement

* File Name in Git : <b>[07_continue_statement.c](http://github.com/princu09/c/blob/master/07_continue_statement.c)</b>

```
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
    
}

```


#### Call Value

* File Name in Git : <b>[08_call_value.c](http://github.com/princu09/c/blob/master/08_call_value.c)</b>

```
#include <stdio.h>

void changeValue(int *address)
{
    *address = 375;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
    
}

```


#### Do While Loop

* File Name in Git : <b>[09_do_while_loop.c](http://github.com/princu09/c/blob/master/09_do_while_loop.c)</b>

```
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
    
}
```


#### For Loop

* File Name in Git : <b>[10_for_loop.c](http://github.com/princu09/c/blob/master/10_for_loop.c)</b>

```
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
    
}
```

#### While Loop

* File Name in Git : <b>[11_while_loop.c](http://github.com/princu09/c/blob/master/11_while_loop.c)</b>

```
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 54)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
    
}

```

#### Switch Case

* File Name in Git : <b>[12_switch_case.c](http://github.com/princu09/c/blob/master/12_switch_case.c)</b>

```
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

    
}
```

#### Pointer

* File Name in Git : <b>[13_pointer.c](http://github.com/princu09/c/blob/master/13_pointer.c)</b>

```
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

    
}
```

#### Convertor

* File Name in Git : <b>[14_convertors.c](http://github.com/princu09/c/blob/master/14_convertors.c)</b>

```
#include <stdio.h>

int main()
{

    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

        scanf(" %c", &input);
        //    printf("The character is '%c'", input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f Inches is equal to %f Foot\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f Cms is equal to %f Inches\n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f Pounds is equal to Kgs %f \n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters \n", first, second);
            break;

        default:
            printf("In defult now");
            break;
        }
    }
end:

    return 0;

    
}
```

#### Copy String

* File Name in Git : <b>[15_copystr.c](http://github.com/princu09/c/blob/master/15_copystr.c)</b>

```
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
    
}
```

#### Functions 1

* File Name in Git : <b>[16_functions_1.c](http://github.com/princu09/c/blob/master/16_functions_1.c)</b>

```
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("This sum is %d\n", c);
    return 0;
    
}

```

#### Star Pattern

* File Name in Git : <b>[17_star_pattern.c](http://github.com/princu09/c/blob/master/17_star_pattern.c)</b>

```
#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows to print */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for (i = 1; i <= rows; i++)
    {
        /* Print leading spaces */
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        /* Print star */
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;

    
}
/*
Print Like this pattern :
            *
           ***
          *****
         *******
        *********
*/
```

#### String

* File Name in Git : <b>[18_string.c](http://github.com/princu09/c/blob/master/18_string.c)</b>

```
#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[34];
    gets(str);

    printf("Using custom function printStr\n");
    printStr(str);

    printf("Using printf %s\n", str);
    printf("using puts: \n");

    puts(str);
    return 0;
    
}
```

#### String Length

* File Name in Git : <b>[19_strlen.c](http://github.com/princu09/c/blob/master/19_strlen.c)</b>

```
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Manan";
    char s2[] = "Kamalam";

    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    return 0;
    
}
```

#### Recursive Function

* File Name in Git : <b>[20_recursive_function.c](http://github.com/princu09/c/blob/master/20_recursive_function.c)</b>

```
#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want the factorial of :");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
    
}

```

#### Go to Statement

* File Name in Git : <b>[21_go_to_statement.c](http://github.com/princu09/c/blob/master/21_go_to_statement.c)</b>

```
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*lebel:
        printf("we are in lebel\n");
        goto end;
    printf("Hello World\n");

    goto lebel;

    end:
        printf("We are done");
    */

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number and press 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }

end:
    return 0;

    
}
```

#### Format Specifiers And Escape Sequences

* File Name in Git : <b>[22_format_specifiers_and_escape_sequences.c](http://github.com/princu09/c/blob/master/22_format_specifiers_and_escape_sequences.c)</b>

```
#include <stdio.h>
#define PI 3.14

int main(int argc, char const *argv[])
{
    int a = 5;
    float b = 10.5;

    printf("The value of a is %d and value of b is %.2f\n", a, b);
    printf("PI value is %f", PI);
    printf("\nNote : Format Specifier pdf in this folder");
    return 0;
    
}

```

#### If Else

* File Name in Git : <b>[23_if_else.c](http://github.com/princu09/c/blob/master/23_if_else.c)</b>

```
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

    
}
```


#### Size

* File Name in Git : <b>[24_size_1.c](http://github.com/princu09/c/blob/master/24_size_1.c)</b>

```
#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("%lu",sizeof(int));

    return 0;
    
}
```


#### TypeCasting Float

* File Name in Git : <b>[25_typecasting_float.c](http://github.com/princu09/c/blob/master/25_typecasting_float.c)</b>

```
#include <stdio.h>

/*typecasting syntax
(type) value*/

int main(int argc, char const *argv[])
{
    int a = 3;
    float b = (float)54/5;
    printf("A value of is %d A value of b is %.2f\n", a ,b);
    return 0;
    
}
```


#### TypeCasting Intager

* File Name in Git : <b>[26_typecasting_int.c](http://github.com/princu09/c/blob/master/26_typecasting_int.c)</b>

```
#include <stdio.h>

/*typecasting syntax
(type) value*/

int main(int argc, char const *argv[])
{
    int a = 3;
    float b = 54/5;
    printf("A value of is %d A value of b is %d\n", a , (int)b);
    return 0;
}
```


#### Fibonacci Number

* File Name in Git : <b>[27_fibonacci_number.c](http://github.com/princu09/c/blob/master/27_fibonacci_number.c)</b>

```
#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; //1 for iteration 1
        a = b - a; //1 for iteration 1
    }

    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}
```


#### Print Table

* File Name in Git : <b>[28_print_table.c](http://github.com/princu09/c/blob/master/28_print_table.c)</b>

```
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
```

----
######  Note : Show Many More

First Download VS code Editor and install it on ubuntu/kali/windows

then start your first program

This all files provide to you totally free

How to compile and execute :

gcc -o file file.c

this is command to create a file from .c file

in windows use .exe and and in linux direct run using ./filename

Important extensions :

1) code runners
2) c/c++
3) c compiler // create shortcut for this extensions and use it.


Note : Join Out Telegram channel to get daily updates and data 
