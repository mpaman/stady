package Java.Lab.lab3;

import java.util.Scanner;

public class Lab3_2 {
    public static void main(String[] args) {
        int rows=0,colums=0;
        Scanner sc = new Scanner(System.in);         
        System.out.print("Enter the number of rows:  ");         
        rows = sc.nextInt();
        System.out.print("Enter the number of columns ");         
        colums = sc.nextInt();
        int [][] m= new int[rows][colums];
        int a[][]= new int[rows][colums];
        int b[][]= new int[rows][colums];
        System.out.print("Enter the matrix values:");         
        for(int i =0;i<rows;i++){
            for(int j =0;j<colums;j++)
                m[i][j]=sc.nextInt();
        }
        sc.close();
        for(int i =0;i<rows;i++){
            for(int j =0;j<colums;j++){
                a[i][j]=m[i][j];
            }
        }
        for(int i =0;i<colums;i++){
            for(int j =0;j<rows;j++){
                b[j][i]=m[j][i];
            }
        }
        
        System.out.println("The initial matrix:");
        for(int i =0;i<rows;i++){
            for(int j =0;j<colums;j++){
                System.out.print(a[i][j]+"\t");
            }
            System.out.print("\n");
        }
        System.out.println("The transposed matrix:");
        for(int i =0;i<colums;i++){
            for(int j =0;j<rows;j++){
                System.out.print(b[j][i]+"\t");
            }
            System.out.print("\n");
        }
    }
}