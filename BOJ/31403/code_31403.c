#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int A, B, C, temp = 0;
    char buf1[10] = "";
    char buf2[5] = "";
    

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    sprintf(buf1, "%d", A);
    sprintf(buf2, "%d", B);
    strcat(buf1, buf2);

    temp = atoi(buf1);

    printf("%d\n", A + B - C);
    printf("%d", temp - C);

    return 0;
}