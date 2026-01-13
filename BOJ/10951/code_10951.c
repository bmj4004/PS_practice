#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024] = "";
    int A, B = 0;
    char c = 0;

    while (fgets(str, sizeof(str), stdin)) {
        if (strcmp(str, "\n") == 0) {
            break;
        }
        sscanf(str, "%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    
    return 0;
}