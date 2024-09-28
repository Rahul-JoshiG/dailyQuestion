/*
Write a program to print the sum of all even numbers and 
odd number range of 1 to n. 
Value of n ask from the user.
*/
#include<stdio.h>
int main(){
    int n, evenSum = 0, oddSum = 0;

    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        if(i%2 == 0){
            evenSum += i;
        }
        else{
            oddSum += i;
        }

    }

    printf("Sum of all even number = %d\n",evenSum);
    printf("Sum of all odd number = %d\n",oddSum);
    
    return 0;
}