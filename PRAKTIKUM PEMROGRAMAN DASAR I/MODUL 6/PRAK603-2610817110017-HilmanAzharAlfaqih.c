#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama");
    } else {
        int firstRow[n1], secondRow[n2];

        for (int i = 0; i < n1; i++) {
            scanf("%d", &firstRow[i]);
        }

        for (int i = 0; i < n2; i++) {
            scanf("%d", &secondRow[i]);
        }

        for (int i = 0; i < n1; i++) {
            printf("%d ", firstRow[i] * secondRow[i]);
        }
    }

    return 0;
}