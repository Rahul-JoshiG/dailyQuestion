/*
Write a program to check the given number 
is strong or not?
A strong number is a number where the sum
of the factorials of each digit is equal to the original number.
For example, 145 is a strong number because
1! + 4! + 5! = 1 + 24 + 120 = 145. 
*/
#include<stdio.h>
int findFactorial(int);
int main(){

    int num,temp, sum = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    temp = num;

    while(temp!=0){
        int rem = temp % 10;
        sum += findFactorial(rem);
        temp /= 10;
    }
    if(sum == num){
        printf("%d is strong number",num);
    }
    else{
        printf("%d is not strong number",num);
    }


    return 0;
}
int findFactorial(int n){
    int  fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}