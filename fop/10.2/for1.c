#include <stdio.h>
int main()
{
  int arr[6][5] = {{10,20,30,40,50},{60,70,80,90,100},{110,120,130,140,150},{160,170,180,190,200},{210,220,230,240,250},{260,270,280,290,300}};

  printf("The Array elements are:\n");

  for(int i=0; i<6; i++) {
    for(int j=0; j<5; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
