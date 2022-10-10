package com.study;

import java.util.ArrayList;

public class ListArray {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Ford");
        cars.add("Mazda");
        System.out.println(cars);
        int size = cars.size();
        cars.set(0, "Opel");
      }
}
