
#include <stdio.h>
void main(void) {
                int nCount=1000;
                for (;nCount >400;) {
                    printf("%d\t", nCount-=100);
                }
                    printf("\n");
}