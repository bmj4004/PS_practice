#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int N;
    int max = INT32_MIN, min = INT32_MAX, temp = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);

        if (max < temp) {
            max = temp;
        }

        if (min > temp) {
            min = temp;
        }
    }

    printf("%d %d", min, max);

    return 0;
}