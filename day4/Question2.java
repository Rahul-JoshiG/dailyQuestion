package programming.day4;

import java.util.Scanner;

/*
* Write a program to find the roots of a
* quadratic equations using switch/match case.
* */
public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("quadratic equation ax^2 + bx + c = 0");

        System.out.print("Enter the value of a : ");
        int a = sc.nextInt();

        System.out.print("Enter the value of b : ");
        int b = sc.nextInt();

        System.out.print("Enter the value of c : ");
        int c = sc.nextInt();

        double d = Math.pow(b, 2) - 4*a*c;

        String root1, root2;

        int res;
        if (d>0)
            res = 1;
        else
            res = 0;

        switch (res){
            case 1:
                root1 = String.valueOf((-b + Math.sqrt(d))/2*a);
                root2 = String.valueOf((-b - Math.sqrt(d))/2*a);
                System.out.println("roots are real and different");
                System.out.println("root1 = "+root1);
                System.out.println("root2 = "+root2);
                break;
            case 0:
                if(d<0)
                    res = 1;
                switch (res){
                    case 1:
                        double realPart = (double) -b / 2 *a;
                        double imagePart = Math.sqrt(-d)/2*a;
                        root1 = String.valueOf(realPart+imagePart+'i');
                        root2 = String.valueOf(realPart-imagePart+'i');
                        System.out.println("roots are complex and different");
                        System.out.println("root1 = "+root1);
                        System.out.println("root2 = "+root2);
                        break;
                    case 0:
                        root1 = String.valueOf(-b/2*a);
                        System.out.println("roots are real and equal");
                        System.out.println("root1 and root2 are = "+root1);
                        break;
                }
        }
        sc.close();
    }
}
