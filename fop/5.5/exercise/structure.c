#include <stdio.h>
#include <string.h>

typedef struct structure
{
    int id;
    char name[81]
}person;


int main(){
person charles, jim, jane;
    charles.id = 1;
    jim.id = 2;
    jane.id = 3;
    strcpy(charles.name, "Charles");
    strcpy(jim.name, "Jim");
    strcpy(jane.name, "Jane");
    printf("%s\n", charles.name);
    printf("%s\n", jim.name);
    printf("%s\n", jane.name);
    printf("%d %s", charles.id, charles.name);
    return 0;
}