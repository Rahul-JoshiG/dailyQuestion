package programming.day2;

import java.util.Scanner;
/*
 * If the three sides of a triangle are entered through the keyboard,
 * write a program to check whether the triangle is
 * isosceles, equilateral, scalene or right-angled triangle.
 * */

public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first side of triangle : ");
        int side1 = sc.nextInt();

        System.out.print("Enter second side of triangle : ");
        int side2 = sc.nextInt();

        System.out.print("Enter third side of triangle : ");
        int side3 = sc.nextInt();


        if (side1 >= 0 || side2 >= 0 || side3 >= 0) {
            if (side1 == side2 && side1 == side3) {
                System.out.println("Triangle is equilateral triangle");
            } else if (side1 == side2 || side1 == side3 || side3 == side2) {
                System.out.println("Triangle is isosceles triangle");
            } else if (side1 * side1 + side2 * side2 == side3 * side3 ||
                    side2 * side2 + side3 * side3 == side1 * side1 ||
                    side1 * side1 + side3 * side3 == side2 * side2) {
                System.out.println("Triangle is Right-Angle triangle");
            } else {
                System.out.println("Triangle is scalene");
            }
        } else {
            System.out.println("Not valid triangle");
        }
    }
}
