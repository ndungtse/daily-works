import java.util.HashSet;

public class App {
    public static void main(String[] args) throws Exception {
        
        Book b1 = new Book("Beautiful Pain", "Unknown");
        Book b3 = new Book("Beautiful Pain", "Unknown");
        Book b2 = new Book("Summer", "Peter");

        if(b1.equals(b2)){
            System.out.println("b1 and b2 are equal");
        } else {
            System.out.println("b1 and b2 are not equal");
        }

        if(b1.equals(b3)){
            System.out.println("b1 and b3 are equal");
        } else {
            System.out.println("b1 and b3 are not equal");
        }

        System.out.println("b1 equals b2: " + b1.equals(b2));
        System.out.println("b1 equals b3: " + b1.equals(b3));

        HashSet<Book> set = new HashSet<Book>();
        set.add(b1);
        set.add(b2);
        set.add(b3);
        System.out.println("Set size " + set.size());
    }
}
