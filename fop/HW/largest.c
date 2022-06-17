#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int arr[]= {0,1,2,3,4,5,6,7};
    int l = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++){
        if(arr[0] <arr[i]){
            arr[0]=arr[i];
    }
    }
    printf("%d ",arr[0]);
    return 0;
}