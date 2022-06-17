#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_length(char str[])
{
    int i;
    for( i = 0; str[i] != '\0';i++);
    return i;
}
void main(){
    char word[100], newword[100]="";

    printf("WELCOME TO PALINDROME CHECKER!\n");
    printf("____________________________________\n");
    printf("Enter any word to verify: ");
    scanf("%s", word);
int i,j;
j = strling_length(word) - 1;
i=0;

while(j > 1){
    if(word[j--] == word[i++]){
        printf("%s is a palindrome", word);
        return;
    }
    printf("%s is not a plaindrome", word);
    exit(0);
}
    
} 
    