package programming.day3;
/*
* Any character is entered through the keyboard, write a program to determine whether the character entered
* is a capital letter, a small case letter, a digit or a special symbol.
* The following shows the range of ASCII values for various characters.
* A – Z                            65-90
* a – z                             97-122
* 0 – 9                             48-57
* special symbols         0-47, 58 - 64, 91 - 96, 123 - 127
* */

import java.util.Scanner;

public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any character : ");
        char ch = sc.nextLine().charAt(0);

        if(ch >= 65 && ch <= 90)
            System.out.println(ch+" is Capital alphabet");
        else if(ch >= 97 && ch <= 122)
            System.out.println(ch+" is Small alphabet");
        else if(ch >= 48 && ch <= 57)
            System.out.println(ch+" is Digit");
        else
            System.out.println(ch+" is symbol");

        sc.close();
    }
}
