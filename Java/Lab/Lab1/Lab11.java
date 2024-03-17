package Java.Lab.Lab1;

import java.util.Scanner;

public class Lab11  {
    public static void main(String[] args) {         
        Scanner sc = new Scanner(System.in);         
        System.out.print("a : ");         
        int a = sc.nextInt();
        System.out.print("b : ");         
        int b = sc.nextInt();        
        System.out.print("c : ");         
        int c = sc.nextInt();
        sc.close();          
        double x1 = ((-b)+Math.sqrt((b*b)-(4*a*c)))/(2*a);         
        double x2 = ((-b)-Math.sqrt((b*b)-(4*a*c)))/(2*a);
        System.out.println("x1 = " + x1);         
        System.out.println("x2 = " + x2);       
    }
    
}
