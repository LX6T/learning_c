#include <stdio.h>
#include <string.h>

void print(char* C) {   // models how printf() outputs a string
    while (*C != '\0') {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main() {
    /*
    char name1[4] = "JOHN";                     // no null terminator
    printf("Name: %s\n", name1);                // results in random chars on the end
    */
    char name2[20] = {'J', 'O', 'H', 'N', '\0', 'X'};       // null terminator
    printf("Name: %s\n", name2);                            // results in prints normally
    int len = strlen(name2);
    printf("Length: %d\n", len);

    print(name2);
}
