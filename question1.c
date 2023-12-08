// 1. Write a program to find the Nth term of the Fibonnaci series.

// Date-> 11/30/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, num1 = 0, num2 = 1, fib_num = 0;

    printf("Enter a number N to get the Nth term of the Fibonnaci series\n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        fib_num = num1 + num2;
        num1 = num2;
        num2 = fib_num;
    }
    printf("%d",fib_num);

    return 0;
}