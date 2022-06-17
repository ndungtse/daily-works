#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct names{
    char letters[5];
    int count;
};
int checkPattern(struct names *names_arr, char *letters, int arr_size){
    for(int i = 0; i < arr_size; i++){
        if(!strcmp(names_arr[i].letters, letters)){
            names_arr[i].count++;
            return 1;
        }
    }
    return 0;
}
char* checkInFile(FILE *file, char *letters){
    char buffer[100];
    char* spotted = "";
    while(fgets(buffer, sizeof(buffer)-1, file)){
        if(!strncmp(letters, buffer, 4)){
            printf("%s", buffer);
        }
    }
    return spotted;
}
void main(){
    int n;
    char name[100];
    printf("How many names do you want to enter ? ");
    scanf("%d", &n);
    struct names arr[n];
    int sizeof_arr = 0;

    FILE *file = fopen("test.txt", "w");
    for(int i = 0; i < n; i++){
        printf("> ");
        scanf(" %[^\n]", name);
        fprintf(file,"%s\n", name);

        char withFour[5];
        strncpy(withFour, name, 4);
        if(checkPattern(arr, withFour, sizeof_arr) == 0){
            strncpy(arr[sizeof_arr].letters, name, 4);
            arr[sizeof_arr].count = 1;
            sizeof_arr++;
        }
    }
    fclose(file);
    for(int i = 0; i < sizeof_arr; i++){
        if(arr[i].count > 1){
            printf("\n\n%s: %d\n", arr[i].letters, arr[i].count);
            file = fopen("names.txt", "r");
            checkInFile(file, arr[i].letters);
            fclose(file);
        }
    }
}