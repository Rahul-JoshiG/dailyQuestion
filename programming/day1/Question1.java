package programming.day1;

import java.util.Scanner;

public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number : ");
        int number = sc.nextInt();

        reverseAndPalindrome(number);
    }

    private static void reverseAndPalindrome(int number) {
        int rev = 0, temp = number;
        while(temp!=0){
            int rem = temp%10;
            rev = (rev*10)+rem;
            temp /= 10;
        }
        System.out.println("Reverse number of "+number+" = "+rev);

        if(rev == number)
            System.out.println(number+" is palindrome");
        else
            System.out.println(number+" is not palindrome");
    }
}
