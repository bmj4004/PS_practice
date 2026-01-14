#include <stdio.h>

int main(void) {
    char ch;
    int cnt = 0;
    int len = 0;

    while ((ch = getchar()) != '\n') {
        if (ch == ' ' && len != 0) {
            cnt++;
            len = 0;
            continue;
        } else if (ch == ' ') {
            len = 0;
            continue;
        }

        len++;
    }

    if (len != 0) {
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}