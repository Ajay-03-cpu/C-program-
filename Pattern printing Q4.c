#include <stdio.h>

int main() {
    int n, i, j;
    char let = 64;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", let + i);
        }
        printf("\n");
    }

    return 0;
}