// 11. Write a program to find the position of first 1 in LSB.

// Date-> 12/8/23 ,Author Name = Aman Singh

#include <stdio.h>
#include <math.h>
int main()
{
    int num, count = 1, expo = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (1)
    {
        int x = pow(2, expo);
        if ((num & x) == x)
        {
            printf("%dth", count);
            break;
        }
        expo++;
        count++;
    }
    return 0;
}