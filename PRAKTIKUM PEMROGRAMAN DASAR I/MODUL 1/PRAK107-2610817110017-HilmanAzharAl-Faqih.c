#include <stdio.h>

int main()
{
int side_1, side_2, side_3, perimeter, land_price, cost;
side_1 = 4;
side_2 = 5;
side_3 = 7;
land_price = 85000;
perimeter = side_1 + side_2  + side_3 ;
cost = perimeter * land_price;

printf("Diketahui:\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side_1, side_2, side_3);
printf("keliling tanah pak Dengklek adalah %d\n", perimeter);
printf("Harga tanah Per Meter adalah %d\n", land_price);
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n", cost);
return 0;
}