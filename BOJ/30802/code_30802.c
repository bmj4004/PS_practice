#include <stdio.h>

int main(void) {
    int N;
    int arr[6];
    int T, P;

    scanf("%d", &N);

    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &T, &P);

    int T_cnt = 0;
    int quoat, remain;

    for (int i = 0; i < 6; i++) {
        quoat = arr[i] / T;
        remain = arr[i] % T;

        if (remain != 0) {
            T_cnt += quoat +1;
        } else {
            T_cnt += quoat;
        }
    }

    int P_cnt = 0, P_remain = 0;

    quoat = N / P;
    remain = N % P;

    P_cnt = quoat;
    P_remain = remain;

    printf("%d\n%d %d\n", T_cnt, P_cnt, P_remain);

    return 0;
}