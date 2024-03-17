package Java.Lab.Lab2;
import java.util.Scanner;

public class Lab2_1 {
    public static void main(String[] args){
        System.out.print("Please enter a temperature value in the Celsius scal: ");
        Scanner sc = new Scanner(System.in);
        double celsius = sc.nextDouble();
        double convertedTemp ;
        System.out.print("Please enter a temperature scale for conversion (K/F/R): ");
        char tempScale = sc.next().charAt(0);
        sc.close();
        if(tempScale=='K' || tempScale=='k'){
            convertedTemp=celsius+273.15;
            System.out.println("Kelvin: "+ convertedTemp);
        }else if(tempScale=='f' || tempScale=='F'){
            convertedTemp=1.8*(celsius)+32;
            System.out.println("Fahrenheit: "+ convertedTemp);
        }else if(tempScale=='r' || tempScale=='R'){
            convertedTemp=celsius*0.8;
            System.out.println("Rankine: "+ convertedTemp);
        }else{
            System.out.println("Invalid temperature scale!");
        }



    }
    
}
