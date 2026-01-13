#include <stdio.h>

int main(void) {
    int N, X = 0;
    int temp = 0;

    scanf("%d %d", &N, &X);

    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);
        if (temp < X) {
            printf("%d ", temp);
        }
    }

    return 0;
}