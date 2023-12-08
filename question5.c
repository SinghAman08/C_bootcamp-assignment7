// 5. Write a program to check whether two given numbers are co-prime numbers or not

// Date-> 12/2/23 ,Author Name = Aman Singh

/*
What is Co-prime number -->
    co-prime number are set of numbers or integers whose both HCF is 1.
Ex.->  15 and 8 is co-prime number.
        15 -> 1,3,5,15
        8 -> 1,2,4,8
        So here common factor is 1.that's why these are co-prime number.
*/

#include <stdio.h>
int main()
{
    int num1, num2, i = 2, flage = 1;
    printf("Please Enter Two Number to cheak it is a co-prime number or not:\n");
    scanf("%d %d", &num1, &num2);

    while (1)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            num1 %= i;
            num2 %= i;
            flage++;
        }
        else
            i++;
        if ((i >= (num1 - 1)) || (i >= (num2 - 1)))
        {
            if (flage == 1)
                printf("Yes,These numbers are a co-prime number");
            else
                printf("No,These numbers are not a co-prime number");

            break;
        }
        printf("a");
    }

    return 0;
}
