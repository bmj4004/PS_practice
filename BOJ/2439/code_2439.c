#include <stdio.h>

int main(void) {
    int line_num = 0;

    scanf("%d", &line_num);

    for (int i = 1; i <= line_num; i++) {
        for (int j = 1; j <= line_num; j++) {
            if (j <= line_num - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}