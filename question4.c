// 4. Write a program to calculate HCF of two numbers

// Date-> 11/30/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num1, num2, hcf = 1;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    int i = 2;
    while (1)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            num1 = num1 / i;
            num2 = num2 / i;
            hcf = hcf * i;
        }
        else
            i++;
        if ((i >= num1) || (i >= num2))
            break;
    printf("a");
    }
    printf("HCF = %d\n", hcf);

    return 0;
}