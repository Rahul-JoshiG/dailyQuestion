#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    int max = (num1 > num2) ? num1 : num2;

    int lcm = 0, i = 1;
    while (i <= max)
    {

        if (max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
        i++;
    }
    printf("LCM = %d\n", lcm);
    return 0;
}