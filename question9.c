// 9. Write a program to check whether a given number is an Armstrong number or not

// Date-> 12/4/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int x, pow = 1, y,res;

    int arm_num = 0;
    printf("Enter a number:\n");
    scanf("%d", &x);

    y = x;

    while (x > 9)
    {
        x = x / 10;
        pow++;
    }
    x = y;
    while (x > 0)
    {
        int rem = x % 10;
        x = x / 10;
        res = 1;
        for (int i = 0; i < pow; i++)
        {
            res = res * rem;
        }
        arm_num = arm_num + res;
    }

    if (arm_num == y)
        printf("Yes, %d is a Armstrong number",y);
    else
        printf("Not, %d is not a Armstrong number",y);

    return 0;
}