import java.util.HashSet;

public class App {
    public static void main(String[] args) throws Exception {
        HashSet set = new HashSet();
        set.add("12345");
        set.add("hello");
        set.add("12345");

        System.out.println(set.size());
    }
}
