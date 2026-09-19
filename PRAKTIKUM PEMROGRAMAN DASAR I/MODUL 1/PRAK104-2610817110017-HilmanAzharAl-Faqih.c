#include <stdio.h>

int main()
{
int A, B, shoes_A, shoes_B;
A = 400000;
B = 350000;
shoes_A = A - (A * 13 / 100);
shoes_B = B - (B * 21 / 100);
printf("Harga Sepatu A adalah %d\n", A);   
printf("Harga Sepatu B adalah %d\n", B);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", shoes_A);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", shoes_B);
return 0;
}