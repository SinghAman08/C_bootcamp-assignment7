// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

// Date-> 11/30/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{

    int n, num1 = 0, num2 = 1, fib_num = 0;
    int x = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (n == fib_num)
        {
            printf("Yes, %d is there in the Fibonacci series", n);
            x = 1;
            break;
        }

        fib_num = num1 + num2;
        num1 = num2;
        num2 = fib_num;
    }
    if (x == 0)
        printf("No, %d is not there in the Fibonacci series\n", n);

    return 0;
}