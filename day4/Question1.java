package programming.day4;

import java.util.Scanner;

/*
* Write a program to check the entered number is
* positive, negative or zero using switch/match case.
*/
public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number : ");
        int number = sc.nextInt();

        int res;
        if(number>0)
            res = 1;
        else
            res = 0;

        switch (res){
            case 1:
                System.out.println(number+" is positive");
                break;
            case 0:

                if(number<0)
                    res = 1;

                switch (res){
                    case 1:
                        System.out.println(number+" is negative");
                        break;
                    case 0:
                        System.out.println(number+" is zero");
                }
                break;
        }

        sc.close();
    }
}
