/*
Write a program to print  Fibonacci series 1 to n.  
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int first = 0, second = 1, next, i = 0;

    while(i<=n){
        if(i==0){
            printf("%d\n",first);
        }
        else if(i==1){
            printf("%d\n",second);
        }
        else{
            next = first + second;
            printf("%d\n",next);
            first = second;
            second = next;
        }
        i++;
    }

    return 0;
}