package Java.Lab.lab4;

import java.util.Scanner;

public class Lab4_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter a non-negative integer: ");
        int num = sc.nextInt();
        printResult(num);
        sc.close();
    }
    public static int factorial(int n) {
        if (n>0 || n!=0) {
            return n*factorial(n-1);
        } else {
            return 1;
        }
    }
    public static void printResult(int n) {
        System.out.println("Factorial of " +n+ ": " + factorial(n));
    }
}
