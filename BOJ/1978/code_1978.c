#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N = 0;
    int temp = 0;

    char num_list[1001] = { 0 };

    num_list[1] = 1;

    for (int i = 2; i <= 100; i++) {
        if (num_list[i] == 1) {
            continue;
        }

        temp = i * 2;
        while (temp <= 1000) {
            num_list[temp] = 1;
            temp += i;
        }
    }

    scanf("%d", &N);

    int *arr = malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int prime_cnt = 0;
    for(int i = 0; i < N; i++) {
        if (num_list[arr[i]] == 0) {
            prime_cnt++;
        }
    }

    printf("%d\n", prime_cnt);

    free(arr);

    return 0;
}