package com.inheritance.familytrees;

public class App {

    public static void main(String[] args) {
        Square q = new Square();
        q.getClass();

        Shape shape = new Shape();
        myRealType(shape);

        // Triangle t = new Triangle();


    }
    
    public static void myRealType(Shape shape) {
        if (shape instanceof Triangle) {
            Triangle t = (Triangle) shape;
            t.mySpecificName();
        } else {
            System.out.println("I am not a triangle "+shape.getClass());
        }
    }
}
