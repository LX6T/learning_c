#include <stdio.h>

void incrementCBV(int a) {      // call by value
    a++;
    printf("Address of variable a in incrementCBV = %d\n", &a);
}

void incrementCBR(int* a) {      // call by reference
    *a += 1;
    printf("Address of variable a in incrementCBR = %d\n", a);
}

int main() {
    int a;
    a = 10;
    incrementCBV(a);
    incrementCBR(&a);
    printf("Address of variable a in main = %d", &a);
    //printf("a = %d", a);
}
