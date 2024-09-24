#include<stdio.h>

int main(){
	int number;
	printf("Enter number : ");
	scanf("%d",&number);

	if(number<0)
		printf("Please enter positive number");
	
	int i = 1;
	while(i<=number){
		printf("%d\n",i);
		i++;
	}
	return 0;
}