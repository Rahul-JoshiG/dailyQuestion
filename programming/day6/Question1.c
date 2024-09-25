#include<stdio.h>
int main(){
    
    int num1, num2;

    printf("Enter 1st number : ");
    scanf("%d",&num1);
    
    printf("Enter 2nd number : ");
    scanf("%d",&num2);

    int hcf = 0, i = 1;
    while(i<=num1 || i<=num2){

        if(num1%i == 0 && num2%i == 0){
            hcf = i;
        }
        i++;
    }
    printf("HCF = %d\n",hcf);
    return 0;
}