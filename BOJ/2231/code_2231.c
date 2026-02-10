#include <stdio.h>

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void) {
    int N;
    scanf("%d", &N);
    
    // N의 생성자는 최대 N - 9*자릿수 이상
    int start = (N - 9 * 7 > 0) ? N - 9 * 7 : 1;
    
    for (int i = start; i < N; i++) {
        if (i + digit_sum(i) == N) {
            printf("%d\n", i);
            return 0;
        }
    }
    
    printf("0\n");
    return 0;
}