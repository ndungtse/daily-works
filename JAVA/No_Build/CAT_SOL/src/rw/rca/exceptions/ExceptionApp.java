package rw.rca.exceptions;

import java.util.List;
import java.util.ArrayList;

public class ExceptionApp {
    public static void main(String[] args) {

        List<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);
        list.add(30);

        try {
            // System.out.println(10 / 0);
            System.out.println(list.get(10));
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (IndexOutOfBoundsException e) {
            System.out.println("Error: " + e.getMessage());
        }

    }
}
