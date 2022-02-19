#include <stdio.h>
#include <stdlib.h>


int main() {
    int a;                                      // a is stored in the stack (stackframe of main())
    int* p;                                     // p is stored in the stack
    p = new int;                                // p points to a location in the heap (*p is an int)
    *p = 10;                                    // *p is modified
    delete p;                                   // memory is freed
    p = new int[20];                            // p points to a location in the heap (*p is an array of 20 ints)
    delete p;                                   // memory is freed
}
