package rw.rca;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.PriorityQueue;
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

        HashSet<String> set = new HashSet<>();
        set.add("John");
        set.add("Jane");

        // System.out.println("Set: " + set);
        // set.remove("John");
        // set.toArray();
        // System.out.println("Set: " + set);

        HashMap<String, String> map = new HashMap<>();
        map.put("John", "Doe");
        map.put("Jane", "Doe");

        System.out.println("Map: " + map);
        map.remove("John");
        // print values

        for (String key : map.keySet()) {
            System.out.println("Key: " + key + " Value: " + map.get(key));
        }

        List<String> list = Arrays.asList("John", "Jane", "James");
        System.out.println("List: " + list);
        // sort list
        // list.sort((s1, s2) -> s1.compareTo(s2));
        Collections.sort(list, (a, b) -> a.compareTo(b));
        list.forEach(System.out::println);
    }
    
}
