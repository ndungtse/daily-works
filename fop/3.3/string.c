#include <stdio.h>
#include<string.h>  
int main(){
    char name[26];
    char answer[26]="ishimwe ndungutse charles";
    printf("Enter your name: ");
    scanf("%s",name);

    int value;
     value = strcmp(name,answer);
    printf("%d",value);
    if (value == 0)
    {
        printf("Hi %s\n", name);
        printf("What are you looking in Charles' PC");
        

    }
    else
    {
        printf("Hello my owner");
        printf("Hi %s\n", name);
    }
    
    return 0;
}