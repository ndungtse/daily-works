package rw.ac.inheritance.familytrees;

public class Shape {
    private double area;
    private double perimeter;

    public void print() {
        System.out.println("I am a super class shape");
    }

    public static void main(String[] args) {

    }

    public void sayName() {
        System.out.println("I am a super class shape");
    }

    //generate setters and getters

    public double getArea() {
        return area;
    }

    public void setArea(double area){
        this.area = area;
    } 

    public double getPerimeter() {
        return perimeter;
    }
}
