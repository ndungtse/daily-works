package com.study;

import java.text.NumberFormat;
import java.util.Arrays;
import java.util.Date;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // byte age = 17;
//        int n = 233;
//        long viewsCount = 3_123_456_789L;
//        float price = 10.99f;
//        char letter = 'A';
//        boolean isEligible = false;
        // String message = "hello Word \"Charles\" got c:\\windows\\";
        // System.out.println(message.length());
        // System.out.println(message);
        // Date now = new Date();
        // System.out.println(now);

        //arrays
        // int[] numbers = new int[5];
        // numbers[0]= 3;
        // numbers[3]= 5;
        // int[] numbers = {1,2, 32 ,0 };
        // // Arrays.toString(numbers);
        // int[][] mnums = new int[3][4];
        // mnums[0][0] = 6;
        // int[][] nums = {{2,3,4}, {2,4,6}};
        // Arrays.sort(numbers);
        // System.out.println(Arrays.toString(numbers));
        // System.out.println(Arrays.deepToString(nums));
        
        //casting
        // String x= "2";
        // String y = "3.5";
        // int z = Integer.parseInt(x);
        // double w = Double.parseDouble(y);
        // double result = ((double)10/ (double)3 ) + z + w;
        // System.out.println(result);

        //Math

        // int res = (int)Math.ceil(2.4F);
        // double rand = Math.random();
        // NumberFormat percent = NumberFormat.getPercentInstance();
        // String resul = percent.format(0.5);
        // System.out.println(resul);

        Scanner scanner = new Scanner(System.in);
            System.out.println("Age: ");
            byte age = scanner.nextByte();
            System.out.println("Name: ");
            String name = scanner.next();
            System.out.println("FullName: ");
            String fullname = scanner.nextLine();
            System.out.println("You are "+ age + " and your name is "+ name + " Your names "+ fullname);
    }
}
