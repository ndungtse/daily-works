package rw.ac.inheritance.familytrees;

public class Triangle extends Shape {
    private float height;
    private float base;

    public Triangle(){

    }

    public Triangle(float height, float base)
    {
        this.base = base;
        this.height = height;
    }

    //getters and setters

    float getBase() {
        return base;  
    }

    void setBase(float base) {
        this.base = base;
    }

    float getHeight(){
        return this.height;
    }

    void setHeight(float height){
        this.height = height;
    }

    double calculateArea (){
        return this.height*this.base/2;
    }

    public void mySpecificName()
    {
        System.out.println("I am specific triangle");
    }
}
