package Java.Lab.lab5;

public class Car{
    private String brand;
    private String model;
    private String year;
        
    public Car() {
    }
    public Car(String brand, String model, String year) {
        this.brand = brand;
        this.model = model;
        this.year = year;
    }
    public Car(String brand, String model) {
        this.brand = brand;
        this.model = model;
    }
    public void setBrand(String brand) {
        this.brand = brand;
    }
    public void setModel(String model) {
        this.model = model;
    }
    // public String getYear() {
    //     return year;
    // }     
    public void setYear(String year) {
        this.year = year;
    }
    public void displayInfo() {
        System.out.printf("%-17s%-25s%6s\n", brand, model, year);
    }
}