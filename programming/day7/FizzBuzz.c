/*
Write a program to print number 1 to 100.
    print "Fizz" if divisible by 3
    print "Buzz" if divisible by 5
    print "FizzBuzz" if divisible by 3 and 5.
*/
#include<stdio.h>
int main(){

    int i = 1;
    while(i<=100){
        if(i%3 == 0 && i%5 == 0){
            printf("FizzBuzz\n");
        }
        else if(i%5 == 0){
            printf("Buzz\n");
        }
        else if(i%3 == 0){
            printf("Fizz\n");
        }
        else{
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}