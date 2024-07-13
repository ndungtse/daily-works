#include<stdio.h>
struct course {
 int courseNo;
 char courseName[8];
 int yearOfStudy;
};
int main(){
 struct course c[] = { {101, "C", 1}, {102, "Go", 1}, {103, "C++", 2}, {104, "Java", 
2}, {105, "PHP", 3},
 {106, "Python", 3}};
 printf("%d\t", c[2].courseNo);
 printf("%s\t", (*(c+2)).courseName);
 printf("%d\n", c[3].yearOfStudy);
 return 0;
}