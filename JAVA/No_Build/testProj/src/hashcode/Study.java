package hashcode;

import java.util.HashMap;

public class Study {
    public static void main(String[] args) {
        // hashcode
        String s1 = "H";
        String s2 = "Hello";
        String s3 = new String("Hello");
        String s4 = new String("Hello");
        System.out.println(s1.hashCode());
        System.out.println(s2.hashCode());
        System.out.println(s3.hashCode());
        System.out.println(72*72);
    }
}
