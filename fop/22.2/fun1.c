#include <stdio.h >
#include <stdlib.h>

int addNumbers(int, int);
int main() {
    int x, y;
    printf("Enter first number");
    scanf("%d", &x);
    printf("Enter second number");
    scanf("%d", &y);

    return 0;
}
int addNumbers(x, y) {
    return x+y;
}