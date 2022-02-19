#include <stdio.h>

int main() {                                                    //        0 +      0 +   1024 +  4 + 2 =    1030
    int a = 1030;                                               //  00000000 00000000 00000100 00000110     (Memory)
    //   -13305   -13306   -13307   -13308      (Address)

    int* p = &a;                                                // int pointer
    printf("Size of integer is %d bytes\n", sizeof(int));       // 4 bytes
    printf("Address = %d, Value = %d\n", p, *p);                // Address = -13308, Value = 1030
    printf("Address = %d, Value = %d\n", p+1, *(p+1));          // Address = -13304, Value = (garbage)

    char* p0 = &a;                                              // char pointer
    printf("\nSize of char is %d bytes\n", sizeof(char));       // 1 byte
    printf("Address = %d, Value = %d\n", p0, *p0);              // Address = -13308, Value = 6 (00000110)
    printf("Address = %d, Value = %d\n", p0+1, *(p0+1));        // Address = -13307, Value = 4 (00000100)

    void* p1 = &a;                                              // void pointer (cannot be dereferenced)
    printf("\nSize of void is %d bytes\n", sizeof(void));       // 1 byte
    printf("Address = %d\n", p1);                               // Address = -13308
    printf("Address = %d\n", p1+1);                             // Address = -13307


    int x = 5;                                              //                    x = 5
    int* p2 = &x;                                           //              p2 -> x = 5
    int** q = &p2;                                          //         q -> p2 -> x = 5
    int*** r = &q;                                          //    r -> q -> p2 -> x = 5
    printf("\n***r = %d\n", ***r);                          // ***r = **q = *p2 = x = 5
}
