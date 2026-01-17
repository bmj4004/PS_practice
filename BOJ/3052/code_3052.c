#include <stdio.h>

int main(void) {
    int arr[10];
    int buf[10];

    int test_num;
    int valid = 0, diff_cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        buf[i] = arr[i] % 42;
    }

    while (1) {
        for (int i = 0; i < 10; i++) {
            if (buf[i] != -1 && valid == 0) {
                valid = 1;
                test_num = buf[i];
                diff_cnt++;
            }

            if (valid == 1) {
                if (test_num == buf[i]) {
                    buf[i] = -1;
                }
            }
        }

        if (valid == 0) {
            break;
        }
        valid = 0;
    }

    printf("%d\n", diff_cnt);
}