package Java.Lab.Lab1;

import java.util.Scanner;

public class Lab13  {
    public static void main(String[] args) {         
        Scanner sc = new Scanner(System.in);         
        System.out.print("Input a five-digit integer: ");         
        int a = sc.nextInt();
        sc.close();
        int x1 = a/10000;
        int x2 = a/1000%10;
        int x3 = a/100%10;
        int x4 = a/10%10;
        int x5 = a%10;
        int sum = x1+x2+x3+x4+x5;  
        System.out.println("The sum of all digits in " + a + " is "+sum+".");              
    }
    
}
