#include <stdio.h>

int main(void) {
    int arr[9] = {0};
    int max = -1, temp = 0, idx = -1;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++) {
        temp = arr[i];
        if (max < temp) {
            max = temp;
            idx = i + 1;
        }
    }

    printf("%d\n%d", max, idx);

    return 0;
}