package rw.rca;

import java.util.PriorityQueue;
import java.util.Queue;
import java.util.TreeSet;

public class CollectionsLearn {
    public static void main(String[] args) {
        TreeSet<String> names = new TreeSet<>();
        names.add("John");
        names.add("Jane");
        names.add("James");
        names.add("Judy");
        names.add("Catherine");

        
        // for (String name : names) {
        //     System.out.println(name);
        // }

        // queue example
        PriorityQueue<String> queue = new PriorityQueue<>();
        queue.add("John");
        queue.add("Jane");
        queue.add("charles");
        
        System.out.println("Queue: " + queue);
    }
    
}
