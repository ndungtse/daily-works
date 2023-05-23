package regex.exercise;

import java.util.Scanner;

public class EmailRegex {
    public static void main(String[] args) {
        String email1;
        boolean isAllowed = false;
        String pattern = "^([a-zA-Z[0-9]]){1,}[@][a-zA-Z]*\\.[a-zA-Z]*$";
        String exampleMatch = "example@.com.br";
        try (Scanner scanner = new Scanner(System.in)) {
            while (!isAllowed) {
                System.out.println("Enter your email: ");
                email1 = scanner.nextLine();
                isAllowed = email1.matches(pattern);
                if (!isAllowed) {
                    System.out.println("Email not allowed. Try again");
                } else {
                    System.out.println("Email saved!");
                }
            }
        }
    }
}
