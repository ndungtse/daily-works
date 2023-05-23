package regex.exercise;

import java.util.Scanner;

public class PhoneRegex {
    public static void main(String[] args) {
        String phoneNumber;
        boolean isAllowed = false;
        String regex = "^\\+2507[0-9]{8}";
        // String exmplaMatch = "+250788888888";
        try (Scanner scanner = new Scanner(System.in)) {
            while (!isAllowed) {
                System.out.println("Enter your phone number: ");
                phoneNumber = scanner.nextLine();
                isAllowed = phoneNumber.matches(regex);
                if (!isAllowed) {
                    System.out.println("Phone number not allowed. Try again");
                } else {
                    System.out.println("Phone number saved!");
                }
            }
        }
    }
}
