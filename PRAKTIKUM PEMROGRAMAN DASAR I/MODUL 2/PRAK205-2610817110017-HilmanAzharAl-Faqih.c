#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    int B;

    scanf("%d", &A);
    scanf("%d", &B);

    int height = A;
    int hypotenuse = B;
    int C = B * B - A * A;
    int base_triangle = sqrt(C);
    int wide = (base_triangle * height) / 2;
    int perimeter = base_triangle + height + hypotenuse;

    printf("Alas = %d\n", base_triangle);
    printf("Tinggi = %d\n", height);
    printf("Keliling = %d\n", perimeter);
    printf("Luas = %d cm^2\n", wide);
}