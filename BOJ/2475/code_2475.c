#include <stdio.h>

int main(void) {
    int arr[5] = { 0 };
    int result = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        result += arr[i] * arr[i];
    }

    result %= 10;
    printf("%d", result);

    return 0;
}