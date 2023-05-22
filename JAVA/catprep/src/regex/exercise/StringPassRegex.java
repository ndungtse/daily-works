package regex.exercise;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class StringPassRegex {
    public static void main(String[] args) {
        String password;
        boolean isAllowed = false;
        try (Scanner scanner = new Scanner(System.in)) {
            while (!isAllowed) {
                System.out.println("Enter your password: ");
                password = scanner.nextLine();
                String regex = "([a-zA-Z]){8,}";
                Pattern pattern = Pattern.compile(regex);
                Matcher matcher = pattern.matcher(password);
                isAllowed = matcher.matches();
                if(!isAllowed){
                    System.out.println("Passord not allowed. Try again");
                } else {
                    System.out.println("Password saved!");
                }
            }
        }

    }
}
