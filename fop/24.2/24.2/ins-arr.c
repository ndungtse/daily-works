#include <stdio.h>

int main(){
    int arr[50], position, i, n, value;
    printf("Please enter array size: ");
    scanf("%d", &n);
    printf("Please enter %d elements: \n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Please enter the location where you want to insert an element: \n");
    scanf("%d", &position);
    printf("Please enter the value to be inserted: \n");
    scanf("%d", &value);

    for(i=n-1; i>=position; i--) {
        arr[i+1] =arr[i];
    }
    arr[position-1] = value;
    printf("resultant array is:\n");

    for(i=0; i<=n; i++){
        printf("\n%d", arr[i]);
    }
    return 0;

}