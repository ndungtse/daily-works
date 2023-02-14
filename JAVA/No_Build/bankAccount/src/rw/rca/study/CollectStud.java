package rw.rca.study;

import java.util.HashMap;
import java.util.HashSet;

public class CollectStud {
    public static void main(String[] args) {
        HashMap<String, String> myHashMap = new HashMap<String, String>();
        myHashMap.put("key1", "value1");
        myHashMap.put("key2", "value2");

        HashSet<String> myHashSet = new HashSet<String>();
        myHashSet.add("value1");
        myHashSet.add("value2");

        // remove
        myHashMap.remove("key1");
        myHashSet.remove("value1");

        // contains
        System.out.println(myHashMap.containsKey("key1"));
        System.out.println(myHashMap.containsValue("value1"));
        System.out.println(myHashSet.contains("value1"));

    }
}
