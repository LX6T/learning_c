#include <stdio.h>
#include <stdlib.h>

void printHelloWorld() {
    printf("Hello, World!\n");
}

int* add(int* a, int* b) {
    int* c = (int*)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main() {
    int x = 2, y = 4;
    int* z = add(&x, &y);
    printHelloWorld();
    printf("Sum = %d\n", *z);
}
