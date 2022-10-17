package com.inheritance.familytrees;

public class Shape {
    private double area;
    private double perimeter;

    public void print() {
        System.out.println("Shape");
    }

    public static void main(String[] args) {

    }

    //generate setters and getters

    public double getArea() {
        return area;
    }

    public void setArea(double area){
        this.area = area;
    } 
}
