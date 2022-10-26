package rw.ac.rca.shape;

public class RunTimeException {

    public static void main(String[] args) {
        System.out.println("Hello From main");
        myMethod();
    }

    public static void myMethod() {
        System.out.println("Hello From my method");
        myNewMethod();
    }

    public static void myNewMethod() {
        System.out.println("Hello From my new method"); 
        int x = 8/0;
    }
}
