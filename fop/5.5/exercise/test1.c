#include <stdio.h> 
#include<string.h> 
 
int main(void)  
{ 
	char c[100]; 
    const char * mystr = "Thisffrr string is definitely longer than what we want to print.";
printf("Here are first 4 chars only: %.4s\n", mystr);
	scanf("%s",c); 
	/*strlen(c) gives total length of string . string index starts from 0 
	last index of character is strlen(c)-1*/ 
	int l = strlen(c)-1; 
	printf("%c %c",c[0],c[l]); 
	return 0; 
} 