#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[100];
    int age;
    int role_number;
    float marks;
}one,two, three;

int main(){
        strcpy(one.name, "Mahoro Peace");
        one.age = 17;
        one.role_number = 201901;
        one.marks = 89.8;
        strcpy(two.name, "Juru Ethan");
        two.age = 17;
        two.role_number = 201902;
        two.marks = 92.5;

        strcpy(three.name, "Mahoro Peace");
        three.age = 17;
        three.role_number = 201901;
        three.marks = 89.8;
        if(one.age == two.age){
            printf("%s and %s are the same age\n", one.name, two.name);
        }
        else{
            printf("%s and %s are not the same age\n", one.name, two.name);
        }

        printf("%d, %s, %d , %.1f \n", one.role_number, one.name, one.age, one.marks);
        printf("%d, %s, %d , %.1f ", two.role_number, two.name, two.age, two.marks);
        printf("%d, %s, %d , %.1f \n", three.role_number, three.name, three.age, three.marks);
}
