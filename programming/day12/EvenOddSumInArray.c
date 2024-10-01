/*
Write a program to calculate sum of all even and odd numbers in array.
Original Array =[1,2,3,4,5,6,7,8,9]
*/
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    printf("Original Array: ");
    for(int i = 0; i < 9; i++){
        printf("%d ",arr[i]);
    }

    int evenSum =0, oddSum = 0;
    for(int i =0; i < 9; i++){
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Even Sum = %d\n",evenSum);
    printf("Odd Sum = %d\n",oddSum);

    return 0;
}