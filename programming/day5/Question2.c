#include<stdio.h>

int main(){
	//small letter	
	printf("small alphabets");
	int i = 97;
	while(i<=122){
		printf("%c\n",i);
		i++;
	}

	//capital
	printf("Capital alphabets");
	i = 65;
	while(i<=90){
		printf("%c\n",i);
		i++;
	}

	return 0;
}