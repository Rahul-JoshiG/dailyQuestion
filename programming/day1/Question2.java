package programming.day1;
/*Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/

import java.util.Scanner;

public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first angle : ");
        int angle1 = sc.nextInt();

        System.out.print("Enter second angle : ");
        int angle2 = sc.nextInt();

        System.out.print("Enter third angle : ");
        int angle3 = sc.nextInt();

        checkValidTriangle(angle1, angle2, angle3);
    }

    private static void checkValidTriangle(int angle1, int angle2, int angle3) {
        if(angle1+angle2+ angle3 == 180)
            System.out.println("Triangle is valid");
        else
            System.out.println("Triangle is not valid");
    }
}
