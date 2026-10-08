#include <stdio.h>
int main()
{
    int radius;
    int height;
   
    scanf("%d", &radius);
    scanf("%d", &height);

    float volume_cylinder = (22.0/7) * radius * radius * height;
    float surfacearea_cylinder = 2*(22.0/7) * radius * (radius + height);
    float circumference_cylinder = 2*(22.0/7) * radius;

    printf("Volume = %.2f\n", volume_cylinder);
    printf("Luas = %.2f\n", surfacearea_cylinder);
    printf("Keliling = %.2f\n", circumference_cylinder);
    return 0;
}