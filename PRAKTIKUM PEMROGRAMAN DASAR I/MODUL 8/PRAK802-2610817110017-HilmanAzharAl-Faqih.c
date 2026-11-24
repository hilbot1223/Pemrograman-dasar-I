#include <stdio.h>

void tukar ( int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int chair_a;
    int chair_b;

    scanf("%d %d", &chair_a, &chair_b);
    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", chair_a, chair_b);

    tukar(&chair_a, &chair_b);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", chair_a, chair_b);

    return 0;
}