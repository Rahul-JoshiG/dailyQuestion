package programming.day3;

import java.util.Scanner;

/*
* A library charges a fine for every book returned late. For first
* 5 days the fine is 50 paise,
* for 6-10 days fine is one rupee and above 10 days fine is 5 rupees.
* If you return the book after 30 days your membership will be cancelled.
* Write a program to accept the number of days the member is late to
* return the book and display the fine or the appropriate message.
* */
public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of days : ");
        int days = sc.nextInt();

        if(days<=0)
            System.out.println("please enter valid days");
        else if(days == 5)
            System.out.println("50 paise fine");
        else if(days>=6 && days<=10)
            System.out.println("1 rupee fine");
        else if(days>=10 && days<=30)
            System.out.println("5 rupee fine");
        else
            System.out.println("Your membership has been canceled...");
        sc.close();
    }
}
