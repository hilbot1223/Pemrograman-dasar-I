#include <stdio.h>

int main() 
{
    float a, b, i, j, x, y, result;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    result = ((a - b) * i) / j - (x + y);

    printf("%.3f\n", result);

    return 0;
}
