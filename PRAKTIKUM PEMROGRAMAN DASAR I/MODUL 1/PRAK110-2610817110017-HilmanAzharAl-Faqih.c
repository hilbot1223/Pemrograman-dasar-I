#include <stdio.h>
#include <math.h>

int main()
{
    int base = 5;
    int height = 12;
    int side_A, side_B, side_C;
    int perimeter, area;

    side_A = height;
    side_C = base;
    side_B = sqrt(pow(side_A, 2) + pow(side_C, 2));
    perimeter = side_A + side_B + side_C;
    area = 0.5 * base * height;

    printf("Diketahui:\n");
    printf("Alas = %.d cm\n", base);
    printf("Tinggi = %.d cm\n", height);
    printf("\nJawab:\n");
    printf("Sisi A = %.d cm\n", side_A);
    printf("Sisi B = %.d cm\n", side_B);
    printf("Sisi C = %.d cm\n", side_C);
    printf("Keliling = %d cm\n", perimeter);
    printf("Luas = %d cm\n", area);

    return 0;
}