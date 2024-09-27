/*
Write a program to check that given number is prime or not.
*/
#include<stdio.h>
int main(){
    int num, flag = 0;
    printf("Enter number : ");
    scanf("%d",&num);

    for(int div = 2; div < num; div++){
        if(num % div == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("%d is not prime",num);
    }
    else{
        printf("%d is prime",num);
    }
    return 0;
}