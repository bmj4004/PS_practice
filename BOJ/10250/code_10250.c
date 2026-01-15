#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T;
    int H, W, N;
    int (*arr)[3];
    
    scanf("%d", &T);
    arr = malloc(sizeof(int) * 3 * T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    int quotient, remainder;
    for (int i = 0; i < T; i++) {
        H = arr[i][0];
        W = arr[i][1];
        N = arr[i][2];

        quotient = N / H;
        remainder = N % H;

        if (remainder != 0) {
            quotient += 1;
        } else {
            remainder = H;
        }

        printf("%d%02d\n", remainder, quotient);
    }

    free(arr);
    return 0;
}