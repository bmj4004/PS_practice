#include <stdio.h>

int main(void) {
    int A, B, C;
    int num;

    char num_string[12] = "";
    int num_arr[9] = {0};

    scanf("%d %d %d", &A, &B, &C);

    num = A * B * C;
    snprintf(num_string, sizeof(num_string), "%d", num);

    for (int i = 0; i < 12; i++) {
        if (num_string[i] == '\0') {
            break;
        }

        num_arr[num_string[i] - '0'] += 1;
    }

    for (int i = 0; i <= 9; i++) {
        printf("%d\n", num_arr[i]);
    }

    return 0;
}