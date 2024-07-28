package rw.rca;

import java.util.Random;

public class StringCompare {
    public static void main(String[] args) {
        String s1 = new String("Hello");
        s1 = null;
        s1 = new String("World");
        String s2 = s1;
        String s3 = new String("WORLD");
        System.out.println("s1 == s2: " + (s1 == s2));
        System.out.println("s1 == s3: " + (s1 == s3));
        System.out.println("s1.equals(s3): " + s1.equals(s3));
        System.out.println("s1.equals(s2): " + s1.equals(s2));
        System.out.println("s1.equalsIgnoreCase(s3): " + s1.equalsIgnoreCase(s3));
        Random random = new Random();
        System.out.println(random.nextInt(100));
    }
}
