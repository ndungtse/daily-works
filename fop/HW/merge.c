#include <stdio.h>
// function to merge two sorted array in 
// ascending order
void mergeSorted(int src1[], int src2[], 
  int newArr[], int n1, int n2)
{
  // variables
  int i = 0, j = 0, k = 0; 

  // merge two sorted arrays into newArr[] 
  while (i < n1 && j < n2) 
  { 
    // compare elements of both arrays
    if (src1[i] <= src2[j]) 
    { 
      newArr[k++] = src1[i++]; 
    } 
    else 
    { 
      newArr[k++] = src2[j++]; 
    } 
  }     
  
  // merg remaining elements 
  // of src1[] (if any) 
  while (i < n1) 
  {
    newArr[k++] = src1[i++]; 
  }

  // merg remaining elements 
  // of src2[] (if any) 
  while (j < n2) 
  {   
    newArr[k++] = src2[j++]; 
  } 
}

// main function
int main()
{
  // array which should be merged
  int src1[] = {9, 18, 27, 36, 45};
  int src2[] = {10, 20, 30, 40, 50};

  // calculate size
  int n1 = sizeof(src1)/sizeof(src1[0]);
  int n2 = sizeof(src2)/sizeof(src2[0]);
      
  // create new array
  int newArr[n1+n2];

  mergeSorted(src1, src2, newArr, n1, n2);

  // display newArrultant array
  printf("New array = ");
  for (int i = 0; i < n1+n2; i++) {
    printf("%d ",newArr[i]);
  }

  return 0;
}