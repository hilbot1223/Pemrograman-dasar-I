#include <stdio.h>

int main()
{
float phi = 3.14;
int rounds = 5;
int distance = 14;
float circumference = (float)distance / rounds;
float radius = circumference / (2 * phi);
printf("Diketahui:\n");
printf("Pak Dengklek mengelilingi taman = %d putaran\n", rounds);
printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", distance);
printf("\nJawaban:\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);
return 0;
}