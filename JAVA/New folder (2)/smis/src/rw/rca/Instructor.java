package rw.rca;

import java.util.Date;
import java.util.List;

class Instructor {
    public Instructor() {
        
    }

    int id;
    String name;
    String phonNumber;
    Date dateOfBirth;
    String nid;
    List<Course> courses;
    Address address;
}