#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int step;
    if (a < b) {
        step = 1;
    } else {
        step = -1;
    }

    for (int i = a; (step == 1 && i <= b) || (step == -1 && i >= b); i += step) {
        printf("%d %d", i, a + b - i);

        if (i != b) {
            printf(" - ");
        }
    }

    return 0;
}