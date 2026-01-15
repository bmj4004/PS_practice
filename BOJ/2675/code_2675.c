#include <stdio.h>
#include <string.h>

int main(void) {
    int T, R;
    char buffer[100];
    char string[21] = "";

    scanf("%d", &T);
    while ((getchar()) != '\n');

    for (int i = 0; i < T; i++) {
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d %s", &R, string);

        for (int j = 0; j < strlen(string); j++) {
            for (int k = 0; k < R; k++) {
                printf("%c", string[j]);
            }
        }

        printf("\n");
    }

    return 0;
}