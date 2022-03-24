#include <stdio.h>
// function for string length
int string_length(char str[])
{
    int i;
    // you can use while loop
    for( i = 0; str[i] != '\0';i++);
    return i;
}
int main()
{
    // declaring character array
    char your_name[20]; // you can change the maximum size of string
    printf("Type you full Name : ");
    // taking input from user
    gets(your_name);
    // using string length function
    int length = string_length(your_name);
    // printing string length
    printf("\nLength of your name (%s) is : %d \n\n",your_name,length);

}
