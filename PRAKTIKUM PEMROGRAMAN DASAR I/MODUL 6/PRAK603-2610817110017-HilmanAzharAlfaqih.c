#include <stdio.h>

int main() {
    int n1, n2;
    int firstRow[100], secondRow[100];

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        for (int i = 0; i < n1; i++) {
            scanf("%d", &firstRow[i]);
        }
        
        for (int i = 0; i < n2; i++) {
            scanf("%d", &secondRow[i]);
        }

        for (int i = 0; i < n1; i++) {
            printf("%d%s", firstRow[i] * secondRow[i],
                   i < n1 - 1 ? " " : "");
        }

        printf("\n");
    }

    return 0;
}