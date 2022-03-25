#include <string.h>
int main() {
   char s[100];
   int i;
   printf("Enter a string : \n");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] -32;
      }else if(s[i] >= 'A' && s[i]<='Z') {
         s[i] = s[i] + 32;
      }else{
         s[i]= s[i];
      }
   }
   
   printf("String in Upper Case = %s", s);
   return 0;
}