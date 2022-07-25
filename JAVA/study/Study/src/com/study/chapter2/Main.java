package com.study.chapter2;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // controll statement
        // int temp = 32;

        // if (temp > 30) {
        //     System.out.println("It's a hot day");
        // } 
        // else if (temp > 20 && temp <= 30)
        //     System.out.println("beautiful day");
        // else
        //     System.out.println("Cold day");

        // //code improv
        // int income = 120_000;
        // boolean hasHighIncome = (income > 100_000);
        // String className = (income > 100_000)?"First":"Second"; 

        //loops

        for (int i = 0; i < 5; i++) {
            System.out.println("Hello");
        }

        String input = "";
        Scanner scanner = new Scanner(System.in);

        while (!input.equals("arg0")) {
            System.out.println("nope");
            input = scanner.nextLine();
            if (input.equals("arg0")) {
                break;
            }
        }

    }
}
