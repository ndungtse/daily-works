package com.constructors;

public class Student {
    public String name;
    public int age;

    public Student() 
    {
        System.out.println("Student constructor");
    }

    public Student(String name, int age)
    {
        this.name = name;
        this.age = age;
    }
}
