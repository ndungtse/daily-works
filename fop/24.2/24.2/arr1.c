#include <stdio.h>

int main() {
    int numbers[100] = {0,1,2,3, [10]=10, 11, 12, [57]=50, [42]=420};
    int i;

    for (i = 0; i < 100; i++) {
        printf("%d=%d", i, numbers[i]);
    }
    return 0;
}