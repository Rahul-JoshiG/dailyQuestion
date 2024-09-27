/*
Write a program to find the factorial of given number.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    printf("The factorial of %d is = %d\n",num, fact);
    return 0;
}