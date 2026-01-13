#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N = 0;
    char str[101] = "";

    int acc = 0;

    scanf("%d", &N);
    while ((getchar()) != '\n');
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < N; i++) {
        acc += str[i] - '0';
    }

    printf("%d", acc);

    return 0;
}