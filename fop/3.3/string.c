#include <stdio.h>
int main(){
    char name[26];
    char answer[26]="ishimwe ndungutse charles";
    printf("Enter your name: ");
    scanf("%s",name);
    if (name==answer)
    {
        printf("Hello my owner");
        printf("Hi %s\n", name);

    }
    else
    {
        printf("Hi %s\n", name);
        printf("What are you looking in Charles' PC");
        
    }
    
    return 0;
}