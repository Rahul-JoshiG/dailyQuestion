/*
Write a program to find the Maximum and Minimum value 
from the array. The values of array asked from the user.
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter value in array: \n");
    for(int i=0; i<size; i++){
        printf("Enter %d value: ",i);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The maximum value is = %d\n",max);

    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("The minimum value is = %d\n",min);
    return 0;
}