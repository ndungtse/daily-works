#include <stdio.h>

void main(){
    int arr[50], i, n;

    printf("Please enter array size: ");
    scanf("%d", &n);
    printf("Please enter array element: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Entered elements are: ");
    for(i=0; i<n; i++){
        printf("\n%d", arr[i]);
    }
}