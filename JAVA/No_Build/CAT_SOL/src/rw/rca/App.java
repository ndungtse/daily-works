package rw.rca;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.TreeSet;

public class App {
    public static void main(String[] args) {
        Student student = new Student("Charles", "Brown", 19);
        System.out.println(student.toString());
        Student student2 = new Student("John", "Doe", 20);
        List<Student> students = new ArrayList<>(Arrays.asList(student, student2, new Student("Jane", "Doe", 18)));

        int comp = student.compareTo(students.get(1));
        System.out.println(comp);
        students.forEach((s) -> System.out.println(s.toString()));

        System.out.println("\n====== SORTED ======");
        students.sort((s1, s2) -> s1.compareTo(s2));
        // Collections.sort(students, (s1, s2) -> s1.compareTo(s2));
        students.forEach((s) -> System.out.println(s.toString()));

        System.out.println("\n====== SORTED WITH DUPLICATE (treeset) ======");
        students.add(student2);
        TreeSet<Student> sorted = new TreeSet<>(students);
        sorted.forEach((s) -> System.out.println(s.toString()));

    }
}
