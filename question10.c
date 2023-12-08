// 10. Write a program to print all Armstrong numbers under 1000

// Date-> 12/4/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int x, pow = 1, y, res;
    int arm_num, rem;
    for (int i = 1; i <= 1000; i++)
    {
        arm_num = 0;
        x = i;
        if (x <= 9 && x >= 1)
        {
            res = 1;
            res = res * i;
            arm_num = arm_num + res;
        }
        else if (x >= 10 && x <= 100)
        {
            for (int j = 0; j < 2; j++)
            {
                rem = x % 10;
                x = x / 10;
                res = 1;
                for (int k = 0; k < 2; k++)                
                    res = res * rem;
                arm_num = arm_num + res;
            }
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                rem = x % 10;
                x /= 10;
                res = 1;
                for (int k = 0; k < 3; k++)                
                    res = res * rem;                
                arm_num = arm_num + res;
            }
        }
        if (arm_num == i)
            printf("%d, ", i);
    }

    return 0;
}