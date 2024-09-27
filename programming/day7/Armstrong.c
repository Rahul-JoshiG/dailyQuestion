/*
Write a program to print armstrong number between 1 to n.
The value of n asked from the user.
*/
#include <stdio.h>
#include <math.h>
int checkLength(int);
int checkArmstrong(int, int);
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        int len = checkLength(i);
        if (checkArmstrong(i, len))
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}

int checkLength(int n)
{
    int len = 0;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return len;
}

int checkArmstrong(int num, int len)
{
    int i = 0, temp = num, sum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += pow(rem, len);
        temp /= 10;
    }

    if (num == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}