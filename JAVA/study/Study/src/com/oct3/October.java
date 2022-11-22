package com.oct3;

import java.util.ArrayList;
import java.util.Set;

public class October {
    public static void main(String[] args) {
        System.out.println("October 3");

        String[] names = {"RCA", "NCA", "NCC"};
        int[][] scores = {{100, 90, 80}, {90, 80, 70}, {80, 70, 60}};
        Set mySet = new Set(names, scores);
        // Set newSetNumber = new Set<E>() {
        //     @Override
        //     public boolean add(E e) {
        //         return false;
        //     }

        //     @Override
        //     public boolean remove(Object o) {
        //         return false;
        //     }
        // };
        
        ArrayList myArrayList = new ArrayList();
        myArrayList.add("RCA");
        System.out.println(myArrayList.get(0));
        System.out.println(mySet);
    }
}
