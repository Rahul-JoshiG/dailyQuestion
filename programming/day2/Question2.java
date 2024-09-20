package programming.day2;

import java.util.Date;
import java.util.Scanner;

/*
In digital would colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are
mention Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and K varying on a
real scale from 0.0 to 1.0.

Write a program that converts RGB color to CMYK color as per the following formulae:

White = Max(Red/255, Green/255, Blue/255)
Cyan = (White - Red / 255)/ White
        Magenta = (White - Green/255)/White
Yellow = (White - Blue/255)/White
        Black = 1- White

If the RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/
public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter red color value : ");
        int r = sc.nextInt();

        System.out.print("Enter green color value : ");
        int g = sc.nextInt();

        System.out.print("Enter blue color value : ");
        int b = sc.nextInt();


        if((r>=0 && r<=255) && (g>=0 && g<=255) && (b>=0 && b<=255)){
            double white = max(r / 255, g / 255, b / 255);
            double cyan = (white - (double) r / 255) / white;
            double magenta = (white - (double) g / 255) / white;
            double yellow = (white - (double) b / 255) / white;
            double black = 1 - white;

            if ((cyan >= 0.0 && cyan <= 1.0) || (magenta >= 0.0 && magenta <= 1.0) ||
                    (yellow >= 0.0 && yellow <= 1.0) || (black >= 0.0 && black <= 1.0)) {
                System.out.println("Cyan = " + cyan + "\t Magenta = " + magenta + "\t Yellow = " + yellow + "\t Black = " + black);
            }
            else{
                System.out.println("Cyan = 0 \t Magenta = 0 \t Yellow = 0 \t Black = 1");
            }
        }
        else {
            System.out.println("Please enter value between 0 to 255");
        }
    }

    private static double max(int i, int i1, int i2) {
        if (i > i1 && i > i2)
            return i;
        else return Math.max(i1, i2);
    }

}
