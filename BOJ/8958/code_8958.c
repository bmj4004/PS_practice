#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[81] = "";
    int T;
    int score_acc = 0;
    int len = 0;

    int total_score = 0;

    scanf("%d", &T);
    while ((getchar()) != '\n');

    for (int i = 0; i < T; i++) {
        score_acc = 0;
        total_score = 0;

        fgets(buf, sizeof(buf), stdin);
        len = strlen(buf);
        for (int j = 0; j < len; j++) {
            if (buf[j] == 'O') {
                total_score += ++score_acc;
            } else if (buf[j] == 'X') {
                score_acc = 0;
            }
        }

        printf("%d\n", total_score);
    }

    return 0;
}