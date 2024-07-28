package rw.rca;

public class Student implements Comparable {
    private String firstName;
    private String lastName;
    private int age;

    public Student() {
    }

    public Student(String firstName, String lastName, int age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    @Override
    public String toString() {
        return "Student{" +
                "firstName='" + firstName + '\'' +
                ", lastName='" + lastName + '\'' +
                ", age=" + age +
                '}';
    }

    @Override
    public int compareTo(Object o) {
        Student student = (Student) o;
        // Compare by first name
        int firstNameComparison = this.firstName.compareTo(student.firstName);
        if (firstNameComparison != 0) {
            return firstNameComparison;
        }

        // Compare by last name
        int lastNameComparison = this.lastName.compareTo(student.lastName);
        if (lastNameComparison != 0) {
            return lastNameComparison;
        }

        // Compare by age
        return Integer.compare(this.age, student.age);
    }
}
