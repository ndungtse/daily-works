package rw.exceptions;

import java.io.File;

public class MainApp {

    public static void main(String[] args) {
        File file = new File("test.txt");
        try {
            file.createNewFile();
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    void doStuff() throws MyException{
        throw new myException("Error");
    }
}