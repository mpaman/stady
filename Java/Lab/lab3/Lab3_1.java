package Java.Lab.lab3;

import java.util.Scanner;

public class Lab3_1 {
    public static void main(String[] args) {
        int sum = 0, count = 0, temp, digit;         
        Scanner sc = new Scanner(System.in);         
        System.out.print("Please enter a positive integer: ");         
        int number = sc.nextInt();         
        sc.close();         
        temp = number;         
        while (temp>0) {         
            temp =temp/10;             
            count++;         
        }         
        temp = number;    
        while (temp>0) {
            digit = temp%10;             
            sum += Math.pow(digit,count);             
            temp=temp/10;         
            }         
        if (number==sum) {             
            System.out.println(number + " is an Armstrong number.");         
        } else {             
            System.out.println(number + " is not an Armstrong number.");         
        } 
    }
}
