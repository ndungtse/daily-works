package rw.rca;

import java.util.Date;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.print("===================== Welcome to Electricity invoice generator====================");

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Your names: ");
        String cnames = scanner.nextLine();

        System.out.print("Enter Your meter number: ");
        long cmeter_number = scanner.nextLong();

        System.out.print("Enter Your Category: ");
        String category = scanner.nextLine();

        scanner.close();

        Customer cust1 = new Customer(cnames, cmeter_number, category);
        Invoice inv = new Invoice(cust1, new Date(), 12, 1000);
        inv.createInvoice(cust1.getNames() + ".txt");

    }
}
