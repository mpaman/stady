package Java.Lab.lab4;
import java.util.Scanner;

public class Quiz {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char choice;
        do {
            System.out.println("===== Expense Tracker =====");
            System.out.printf("Hack\n");
            System.out.println("+ : Code ลับ");
            System.out.println("- : name and password");
            System.out.println("x : Stop");
            System.out.print("Please enter your choice: ");
            choice = sc.next().charAt(0);

            if (choice == '+') {
                System.out.print("Code : ");
                String code = sc.next();
                boolean boo=login(code);
                System.out.println(boo);
                if(boo){
                    System.out.println("Yes is corret");
                    break;
                }else{
                    System.out.println("Noooo!");
                }
                System.out.println();

            } else if (choice == '-') {
                System.out.print("Username : ");
                String a = sc.next();
                System.out.print("pass : ");
                String b = sc.next();
                boolean booboo=login(a,b);
                if(booboo){
                    System.out.println("Yes is corret");
                    break;
                }else{
                    System.out.println("Noooo!");
                }
                System.out.println();

            } else if (choice == 'x') {
                System.out.println("Exiting...");
                System.out.println();
                break;
            } else {
                System.out.println("Invalid choice! Please try again.");
            }
        } while (true);
        sc.close();
    }

    private static boolean login(String a) {
        if(a.equals("123456")){
            return(true);
        }
        else{
            return(false);
        }
        
    }
    private static boolean login(String a,String b) {
        if(a.equals("A")&&b.equals("B")){
            return(true);
        }
        else{
            return(false);
        }
        
    }
}

