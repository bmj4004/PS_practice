#include <stdio.h>

int main(void) {
    int a, b, c;
    int a_square, b_square, c_square;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        a_square = a * a;
        b_square = b * b;
        c_square = c * c;

        if ((a_square == b_square + c_square) ||
            (b_square == a_square + c_square) || 
            (c_square == a_square + b_square) ) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }
    
    return 0;
}