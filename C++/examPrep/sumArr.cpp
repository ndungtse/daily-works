#include<iostream>
using namespace std;

int sumOfArray(int a[], int n, int i=0){

   if(i==n){
    return 0;
   }

   return a[i] + sumOfArray(a, n, i+1);
}

int main(){
  int a[] = {1,2,3,4,5};
  cout<<sumOfArray(a, 5)<<endl;
  return 0;
}
