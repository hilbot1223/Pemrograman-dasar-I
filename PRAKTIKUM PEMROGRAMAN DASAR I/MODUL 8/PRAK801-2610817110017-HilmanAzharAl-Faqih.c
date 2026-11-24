#include <stdio.h>

int main() {
    int number;
    int *ptr;

    scanf("%d", &number);
    ptr = &number;

    printf("Nilai variabel = %d\n", number);
    printf("Alamat variabel = %p\n", (void*)ptr);
    printf("Nilai melalui pointer = %d\n", *ptr);

    *ptr = *ptr * 2;

    printf("Nilai setelah diubah lewat pointer = %d\n", number);

    return 0;
}