public class App {
    public static void main(String[] args) throws Exception {
        // System.out.println("Hello, World!");
        myMethod();
    }

    static void myMethod()
    {
        try {
            System.out.println("Inside try");
        } finally {
            System.out.println("Inside finally");
        }
    }
}
