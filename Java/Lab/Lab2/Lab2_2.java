package Java.Lab.Lab2;

import java.util.Scanner;

public class Lab2_2 {
    public static void main(String[] args){
        System.out.print("Please enter the number: ");
        Scanner sc = new Scanner(System.in);
        double n = sc.nextDouble();
        sc.close();
        if(n>0){
            if(n%1==0){
                if(n%2==0){
                System.out.println(n+"  is the positive even integer number.");
                }
                else{
                System.out.println(n+"  is the positive odd integer number.");
                }
            }
            else{
                int a;
                a=(int)n;
                if(a%2==0){
                System.out.println(n+"  is the positive even integer real.");
                }
                else{
                System.out.println(n+"  is the positive odd integer real.");
                }
            }
        }
        else if(n==0){
            System.out.println("0.0  is the even integer.");
        }
        else{
            if(n%1==0){
                if(n%2==0){
                System.out.println(n+"  is the negative even integer number.");
                }
                else{
                System.out.println(n+"  is the negative odd integer number.");
                }
            }
            else{
                int a;
                a=(int)n;
                if(a%2==0){
                System.out.println(n+"  is the negative even integer real.");
                }
                else{
                System.out.println(n+"  is the negative odd integer real.");
                }
            }
            
        }



    }
}
