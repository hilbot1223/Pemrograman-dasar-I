#include <stdio.h>

int main() 
{
    int n;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(" ");
        }
    }

    printf("\n");

    int start;
    if (n % 2 == 0) {
        start = n;
    } else {
        start = n - 1;
    }

    for (int i = start; i >= 2; i -= 2) {
        printf("%d", i);
        if (i > 2) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}