#include <stdio.h>

int main() {
    int n;
    int A[100][100], B[100][100], result[100][100];
    char label[100];

    scanf("%d", &n);
    getchar();

    fgets(label, sizeof(label), stdin);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    getchar();
    fgets(label, sizeof(label), stdin);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;

            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriks AXB\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d%s", result[i][j], j < n-1 ? " " : "");
        }
        printf("\n");
    }

    return 0;
}