package Java.Lab.Lab1;

import java.util.Scanner;

public class Lab12  {
    public static void main(String[] args) {         
        Scanner sc = new Scanner(System.in);         
        System.out.print("Enter a : ");         
        double a = sc.nextDouble();
        System.out.print("Enter b : ");
        double b = sc.nextDouble();
        sc.close();
        double x1 = Math.sqrt((a*a)+(b*b));
        System.out.println("The hypotenuse C is " + x1);              
    }
    
}
