package com.inheritance.familytrees;

public class Main {
    
    public static void main(String[] args) {
        Square s = new Square();
        s.setSide(5.6f);

        Square q = new Square();
        s.print();

        // final String constant;

        Triangle t = new Triangle(3, 5);
        t.setArea(t.getHeight()*t.getArea()/2);

        s.setArea(39);
        System.out.println(t.getArea());
    }
}
