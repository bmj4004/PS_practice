#include <stdio.h>

typedef enum {ASCENDING, DESCENDING, MIXED, NONE} TYPE;

int main(void) {
    TYPE flag = NONE;
    int temp = 0;
    int arr[8] = {0};

    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[0];

    for (int i = 1; i < 8; i++) {
        if (temp > arr[i]) {
            if (flag == NONE) {
                flag = DESCENDING;
            } else if (flag == ASCENDING) {
                flag = MIXED;
                break;
            }
        } else if (temp < arr[i]) {
            if (flag == NONE) {
                flag = ASCENDING;
            } else if (flag == DESCENDING) {
                flag = MIXED;
                break;
            }
        }

        temp = arr[i];
    }

    switch (flag)
    {
    case ASCENDING:
        printf("ascending\n");
        break;
    
    case DESCENDING:
        printf("descending\n");
        break;

    case MIXED:
        printf("mixed\n");
        break;

    default:
        break;
    }

    return 0;
}