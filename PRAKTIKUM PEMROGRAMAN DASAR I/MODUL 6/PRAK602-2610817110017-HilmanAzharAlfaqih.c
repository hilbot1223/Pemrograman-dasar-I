#include <stdio.h>

int main() {
    int rooms;

    scanf("%d", &rooms);

    int numbers[rooms];

    for (int i = 0; i < rooms; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < rooms; i++) {
        printf("%d ", numbers[i] * (i + 1));
    }

    return 0;
}