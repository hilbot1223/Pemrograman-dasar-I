#include <stdio.h>

int main()
{
    float first_number;
    float second_number;
    float total;

    printf("Masukkan Nilai pertama: ");
    scanf("%f", &first_number);

    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &second_number);

    total = first_number + second_number;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"",
           first_number, second_number, total);

    return 0;
}