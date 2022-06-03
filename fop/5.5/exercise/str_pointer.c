#include<stdio.h>
#include<stdlib.h>
struct point{
 int x;
int y;
};
struct point* func(int a, int b){
struct point *ptr = (struct point *)malloc(sizeof(struct point));
ptr->x = a;
 ptr->y = b+17;
return ptr;
}
void print(struct point *ptr){
printf("%d %d\n", ptr->x, ptr->y);
}
int main(){
struct point *ptr1, *ptr2, *ptr3;
ptr1 = func(17, 17);
ptr2 = func(31, 103);
ptr3 = func(24, 51);
print(ptr1);
print(ptr3);
free(ptr1);
free(ptr2);
free(ptr3);
return 0;
}