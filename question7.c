// 7. Write a program to print all Prime numbers between two given numbers

// Date-> 12/4/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers to all Prime numbers between these two numbers:\n");
    scanf("%d %d", &x, &y);

    for (int i = x + 1; i < y; i++)
    {
        int num = 2;
        while (num <= i / 2)
        {
            if (i % num == 0)
                break;
            if ((i % num != 0) && (num == i / 2))
                printf("%d, ", i);
            num++;
        }
    }

    return 0;
}