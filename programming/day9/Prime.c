/*
Write a program to print all prime number 1 to n. 
Value of n ask from the user.
*/
#include<stdio.h>
int main(){
    int n, div;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(div = 2; div <i; div++){
            if(i%div == 0){
                break;
            }
        }
        if(i == div){
            printf("%d\n",i);
        }
    }

    return 0;
}