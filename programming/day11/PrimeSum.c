/*
Write a program to compute the sum of the specified number of prime numbers.
For example, when n = 7,
Then Sum = 2+3+5+7+11+13+17 = 58.
*/
#include <stdio.h>

int checkPrime(int n);

int main() {
    int n, i = 2, sum = 0, primeCount = 0;

    printf("Enter the number of prime numbers to sum: ");
    scanf("%d", &n);

    // Loop to find and sum the first n prime numbers
    while(primeCount < n) {
        if(checkPrime(i)) {
            printf("%d\n", i);  // Print each prime number
            sum += i;  // Add prime to the sum
            primeCount++;  // Increment the count of primes found
        }
        i++;  // Move to the next number to check
    }

    printf("Sum of the first %d prime numbers is: %d\n", n, sum);
    return 0;
}

// Function to check if a number is prime
int checkPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int div = 2; div * div <= n; div++) {
        if (n % div == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}
