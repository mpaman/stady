package Java.Lab.lab4;

import java.util.Scanner;

public class Lab4_2 {
    private static float currentAmount = 1000;
    private static float totalIncome;
    private static float totalExpense;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Lab4_2 expenseTracker = new Lab4_2();

        char choice;
        do {
            System.out.println("===== Expense Tracker =====");
            System.out.printf("Current amount: %.2f\n", currentAmount);
            System.out.println("+ : Income");
            System.out.println("- : Expense");
            System.out.println("x : Termination");
            System.out.print("Please enter your choice: ");
            choice = scanner.next().charAt(0);

            if (choice == '+') {
                expenseTracker.addIncome();
                System.out.println();

            } else if (choice == '-') {
                expenseTracker.addExpense();
                System.out.println();

            } else if (choice == 'x') {
                System.out.println("Exiting...");
                System.out.println();
                break;
            } else {
                System.out.println("Invalid choice! Please try again.");
            }
        } while (true);
        expenseTracker.printSummary();
        scanner.close();
    }

    private void addIncome() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter income amount: ");
        float incomeAmount = scanner.nextFloat();
        currentAmount += incomeAmount;
        totalIncome += incomeAmount;
        scanner.close();
        
    }

    private void addExpense() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter expense amount: ");
        float expenseAmount = scanner.nextFloat();
        if (expenseAmount > currentAmount) {
            System.out.println("Invalid amount! Please try again.");
        } else {
            currentAmount -= expenseAmount;
            totalExpense += expenseAmount;
        }
        scanner.close();
    }

    private void printSummary() {
        System.out.println("===== Summary =====");
        System.out.printf("Total Income: %.2f\n", totalIncome);
        System.out.printf("Total Expense: %.2f\n", totalExpense);
        System.out.printf("Total Amount: %.2f\n", currentAmount);
    }
}
