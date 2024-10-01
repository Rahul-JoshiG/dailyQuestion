/*
Write a program to convert decimal to binary number system.
*/
#include<stdio.h>
int main(){

    int num, temp, i = 0, bin[32];
    printf("Enter number: ");
    scanf("%d",&num);
    temp = num;

    while(temp != 0){
        bin[i]= temp % 2;
        temp /= 2;
        i++;
    }

    printf("Binary Representation\n");
    for(int j=i-1; j>=0; j--){
        printf("%d",bin[j]);
    }
    return 0;
}