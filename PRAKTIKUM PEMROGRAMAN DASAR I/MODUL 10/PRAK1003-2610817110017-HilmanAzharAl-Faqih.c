#include <stdio.h>

int sum_digits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sum_digits(n / 10);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    printf("Jumlah digit dari %d adalah %d\n", n, sum_digits(n));

    return 0;
}