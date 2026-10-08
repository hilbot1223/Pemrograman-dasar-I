#include <stdio.h>

int main()
{
    int total_seconds;
    int days, hours, minutes, seconds;

    scanf("%d", &total_seconds);

    if (total_seconds >= 86400) {
        days = total_seconds / 86400;
        total_seconds = total_seconds % 86400;
    } else {
        days = 0;
    }

    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("%d hari %02d:%02d:%02d\n",days, hours, minutes, seconds);

    return 0;
}