#include <stdio.h>

int main()
{
    int pilihan;
    float a, b, hasil;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &a);

            printf("Masukkan nilai kedua : ");
            scanf("%f", &b);

            if (pilihan == 1) {
                hasil = a + b;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n",
                       a, b, hasil);
            } else if (pilihan == 2) {
                hasil = a - b;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n",
                       a, b, hasil);
            } else if (pilihan == 3) {
                hasil = a * b;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n",
                       a, b, hasil);
            } else {
                if (b != 0) {
                    hasil = a / b;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n",
                           a, b, hasil);
                } else {
                    printf("Tidak bisa membagi dengan nol\n");
                }
            }
        } else if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator HILMAN\n");
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }

        printf("\n");

    } while (pilihan != 5);

    return 0;
}