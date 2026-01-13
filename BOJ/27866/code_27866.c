#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1024] = "";
    int N = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%d", &N);

    printf("%c", str[N - 1]);
    
    return 0;
}