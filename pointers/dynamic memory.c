#include <stdio.h>
#include <stdlib.h>

// malloc: void* malloc(size_t size)                            Allocates memory block of size 'size'
//                                                              Does not initialise bytes

// calloc: void* calloc(size_t num, size_t size)                Allocates 'num' memory blocks of size 'size'
//                                                              Initialises all bytes to 0

// realloc: void* realloc(void* ptr, size_t size)               Reallocates a different memory block of size 'size' to pointer 'ptr'

int main() {
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int*) malloc(n*sizeof(int));          // Dynamically allocated array with malloc()
    int *B = (int*) calloc(n,sizeof(int));          // Dynamically allocated array with calloc()
    for (int i = 0;i<n;i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0;i<n;i++) {
        printf("%d ", B[i]);
    }
    printf("\n\n");

    for (int i = 0;i<n;i++) {
        A[i] = i+1;
        B[i] = i+1;
    }
    for (int i = 0;i<n;i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0;i<n;i++) {
        printf("%d ", B[i]);
    }
    printf("\n\n");

    free(A);
    for (int i = 0;i<n;i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    int* C = (int*) realloc(B,2*n*sizeof(int));                     // Reallocated memory with realloc()
    printf("Previous address = %d, New address = %d\n", B, C);
    for (int i = 0;i<2*n;i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}
