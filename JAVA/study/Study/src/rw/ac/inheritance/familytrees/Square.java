package rw.ac.inheritance.familytrees;

public class Square extends Shape {
    private float side;
    public float area;

    public void print() {
        System.out.println("Square");
    }

    public static void main(String[] args) {
        Square q = new Square();
        Shape s = (Shape) q;
        q.print();
        s.print();
    }

    // generate setter and getters
    public float getSide() {
        return side;
    }

    public void setSide(float side) {
        this.side = side;
    }

}
