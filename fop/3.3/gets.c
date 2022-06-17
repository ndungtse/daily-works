#include <stdio.h>
int main(){
    char name[]="";
    // char answer[26]="charles";
    printf("Enter your name: ");
    gets(name);
    if (name =="charles")
    {
        printf("Hello my owner");
        printf("Hi ");
        puts(name);

    }
    else
    {
        printf("Hi ");
        puts(name);
        printf("What are you looking in Charles' PC");
        
    }
    
    return 0;
}