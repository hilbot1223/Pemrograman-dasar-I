#include <stdio.h>

int main()
{
    int n, multiple;
    int total = 0;

    scanf("%d %d", &n, &multiple);

    for (int i = 1; i <= n; i++) {
        int row = 0;

        for (int j = i; j >= 1; j--) {
            if (j != i) {
                printf(" + ");
            }

            printf("(%d * %d)", j, multiple);
            row += j * multiple;
        }

        printf(" = %d\n", row);
        total += row;
    }

    printf("%d\n", total);

    return 0;
}