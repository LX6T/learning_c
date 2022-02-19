#include <stdio.h>

int sum(int B[], int sizeA) {                   // Equivalent to sum(int* B), arrays are always CBR
    int i, sum = 0;
    printf("size in main(): %d\n", sizeA);
    int sizeB = sizeof(B)/sizeof(B[0]);         // size = sizeof(pointer)/sizeof(integer) = 8/4 = 2
    printf("size in sum(): %d\n", sizeB);
    for (i=0;i<sizeA;i++) {
        sum += B[i];
        B[i] = 0;                               // Changing original array
    }
    return sum;
}

int main() {
    int A[3] = {1, 4};
    printf("A[0]: %d         Location: %d\n", *A, A);               // A is equivalent to &A[0]
    printf("A[1]: %d         Location: %d\n", *(A+1), A+1);         // A+i is equivalent to &(A[i])
    printf("A[2]: %d         Location: %d\n", *(A+2), A+2);         // Unassigned values are 0 by default
    printf("A[5]: %d    Location: %d\n\n", *(A+5), A+5);            // Out of array range, random memory

    int B[] = {1, 2, 3, 4, 5};
    int size = sizeof(B)/sizeof(B[0]);
    for (int i=0;i<size;i++) {printf("%d ", B[i]);}
    printf("\n");
    int total = sum(B, size);
    printf("sum(B): %d\n", total);
    for (int i=0;i<size;i++) {printf("%d ", B[i]);}
    printf("\n");
}
