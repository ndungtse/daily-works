#include <iostream>
using namespace std;

int linearSearch(int arr[], int len, int key){
    for(int i=0; i<len; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    int numbers[] = {1,5,3,4,2,7,6,8,9};
    int len = sizeof(numbers)/sizeof(numbers[0]);
    int key = 5;

    int index = linearSearch(numbers, len, key);
    if(index == -1){
        cout << "Key not found" << endl;
        }else{
            cout << "Key found at index: " << index << endl;
        }
}