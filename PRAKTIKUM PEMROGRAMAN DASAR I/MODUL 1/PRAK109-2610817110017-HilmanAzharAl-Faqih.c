#include <stdio.h>

int main()
{
int troops_yz = 958730;
int number_of_heroes = 5;
int troops_per_hero = troops_yz / number_of_heroes;

printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", troops_yz);
printf("Jumlah pahlawan = %d\n", number_of_heroes);
printf("Jumlah pasukan yang harus dikalahkan oleh setiap pahlawan adalah %d pasukan\n", troops_per_hero);
return 0;
}