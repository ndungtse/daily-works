package com.constructors;

public class Main {
    
    public static void main(String[] args) {
        Student student = new Student();
        System.out.println(student.name);
        System.out.println(student.age);

        Student st2 = new Student("John", 20);
        System.out.println(st2.name);
        System.out.println(st2.age);
    }
}
