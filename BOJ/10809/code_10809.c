#include <stdio.h>
#include <string.h>

int main(void) {
    char alpha[27];
    char word[101];
    int len = 0;
    char test_ch = 0;

    alpha[0] = 'a';
    for (int i = 1; i < 27; i++) {
        if (i == 26) {
            alpha[i] = '\0';
        } else {
            alpha[i] = alpha[i - 1] + 1;
        }
    }

    scanf("%s", word);
    len = strlen(word);
    for (int i = 0; i < 26; i++) {
        test_ch = alpha[i];
    
        for (int j = 0; j < len; j++) {
            if (test_ch == word[j]) {
                printf("%d ", j);
                break;
            }

            if (j == len - 1) {
                printf("%d ", -1);
            }
        }
    }

    return 0;
}