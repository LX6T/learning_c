#include <stdio.h>
#include <stdlib.h>

void printHelloWorld() {
    printf("Hello, World!\n");
}

void printHelloWorld2(void (*pHW)()) {
    pHW();                                  // callback function
}

int* add(int a, int b) {
    return a + b;
}

int main() {
    int c;
    int (*p)(int,int);          // function pointer
    // p = &add;
    p = add;
    // c = (*p)(2,3);
    c = p(2,3);
    printf("%d\n",c);

    void (*q)();
    q = printHelloWorld;
    q();

    printHelloWorld2(q);
}
