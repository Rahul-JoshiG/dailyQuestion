/*
11111 
10001 
10001 
10001 
11111
print above pattern? The value of row ask from the user?
*/
#include<stdio.h>
int main(){
    int limit;
    printf("Enter rows: ");
    scanf("%d",&limit);

    for(int row = 1; row <= limit; row++){
        for(int col = 1; col <= limit; col++){
            if(row==limit || row==1 || col==1 || col==limit){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}