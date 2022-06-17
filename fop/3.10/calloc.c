#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i, n;
 int *element;
 printf("Enter total number of elements: ");
 scanf("%d", &n);
 /*
 returns a void pointer(which is type-casted to int*)
 pointing to the first block of the allocated space
 */
 element = (int*) calloc(n,sizeof(int)); 
 /*
 If it fails to allocate enough space as specified,
 it returns a NULL pointer.
 */
 if(element == NULL)
 {
 printf("Error.Not enough space available");
 exit(0);
 }
 for(i = 0; i < n; i++)
 {
 /*
 storing elements from the user
 in the allocated space
 */
 scanf("%d", element+i);
 }
 for(i = 1; i < n; i++)
 {
 if(*element > *(element+i))
 {
 *element = *(element+i);
 }
 }
 printf("Smallest element is %d", *element);
 return 0;
}