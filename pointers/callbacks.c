#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b) {
    if (a > b) return 1;
    else return 0;
}

int descending(int a, int b) {
    if (a < b) return 1;
    else return 0;
}

void sort(int *A, int n, int (*compare)(int,int)) {
    int i,j,temp;
    for (i=0; i<n; i++) {
        for (j=0; j<n-1; j++) {
            if (compare(A[j],A[j+1])) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main() {
    int i, A[] = {3, 2, 1, 5, 6, 4};
    sort(A, 6, ascending);
    for (i=0; i<6; i++) printf("%d ", A[i]);
    printf("\n");
    sort(A, 6, descending);
    for (i=0; i<6; i++) printf("%d ", A[i]);
}
