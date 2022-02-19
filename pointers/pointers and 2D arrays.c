#include <stdio.h>

// B[i][j] = *(B[i]+j) = *(*(B+i)+j)
// B[i][j][k] = *(B[i][j]+k)= *(*(B[i]+j)+k) = *(*(*(B+i)+j)+k)
// etc. for higher dimensional arrays

int main() {
    int B[2][3] = {{10, 11, 12}, {13, 14, 15}};

    printf("B: %d\n", B);
    printf("*B: %d\n", *B);
    printf("B[0]: %d\n", B[0]);
    printf("&B[0]: %d\n", &B[0]);
    printf("&B[0][0]: %d\n", &B[0][0]);
    printf("B[0][0]: %d\n\n", B[0][0]);


    printf("B: %d\n", B+1);
    printf("*B: %d\n", *(B+1));
    printf("B[1]: %d\n", B[1]);
    printf("&B[1]: %d\n", &B[1]);
    printf("&B[1][0]: %d\n", &B[1][0]);
    printf("B[1][0]: %d\n\n", B[1][0]);


    printf("*(B+1)+2: %d\n", *(B+1)+2);
    printf("B[1]+2: %d\n", B[1]+2);
    printf("&B[1][2]: %d\n", &B[1][2]);
    printf("B[1][2]: %d\n\n", B[1][2]);


    printf("*(*B+1): %d\n", *(*B+1));
    printf("*(B[0]+1): %d\n", *(B[0]+1));
    printf("*(&B[0][1]): %d\n", *(&B[0][1]));
    printf("B[0][1]: %d\n\n", B[0][1]);

}
