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
    printf("WELCOME TO STRING REVERSER!\n");
    printf("____________________________________\n");
    printf("Enter any word to reverse: ");
    scanf("%s", word);
int i,j;
j = string_length(word) - 1;
int s = string_length(word);



while (i>=0)
{
    printf("%c", word[i]);
    i--;
}
printf("\n");
i=0;

while(j > 1){
    if(word[j--] == word[i++]){
        printf("%s is a palindrome", word);
        return;
    }
    exit(0);
}
    
} 
    