#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024] = "";
    int A, B = 0;
    char c = 0;

    while (fgets(str, sizeof(str), stdin)) {
        sscanf(str, "%d %d", &A, &B);

        if (A == 0 && B == 0) break;
        printf("%d\n", A + B);
    }
    
    return 0;
}