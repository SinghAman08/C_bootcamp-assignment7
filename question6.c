// 6. Write a program to print all Prime numbers under 100

// Date-> 12/4/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{

    int count1 = 1, count2 = 1;
    for (int i = 4; i <= 100; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;

            if ((j == i / 2) && (i % j != 0))

                printf("%d, ", i);
        }
    }

    return 0;
}
