#include <stdio.h>

int main(void) {
    int line_num = 0;

    scanf("%d", &line_num);

    for (int i = 0; i < line_num; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}