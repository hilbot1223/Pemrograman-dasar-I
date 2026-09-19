#include <stdio.h>

int main()
{
int a, b, x, y, remainder_a_b, remainder_x_y, total_remainder;
a = 9;
b = 5;
x = 8;
y = 8;
remainder_a_b = a % b;
remainder_x_y = x % y;
total_remainder = remainder_a_b + remainder_x_y;
printf("Variabel a bernilai %d\n", a);
printf("Variabel b bernilai %d\n", b);
printf("Variabel x bernilai %d\n", x);
printf("Variabel y bernilai %d\n", y);
printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_remainder);
return 0;
}