// 8. Write a program to find next Prime number of a given number

// Date-> 12/4/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int x, flage = 0;
    printf("Enter a number:\n");
    scanf("%d", &x);

    while (flage == 0)
    {
        int num = 2;
        for (int i = x + 1; num <= i / 2; i)
        {
            if (i % num == 0)
                break;
            if ((i % num != 0) && (num == i / 2))
            {
                printf("Next prime number is %d\n", i);
                flage = 1;
                break;
            }
            num++;
        }
        x++;
    }

    return 0;
}