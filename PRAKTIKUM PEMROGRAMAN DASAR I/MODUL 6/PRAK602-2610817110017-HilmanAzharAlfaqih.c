#include <stdio.h>

int main() {
    int rooms;
    int numbers[100];

    scanf("%d", &rooms);

    for (int i = 0; i < rooms; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < rooms; i++) {
        printf("%d%s", numbers[i] * (i + 1), i < rooms - 1 ? " " : "");
    }

    printf("\n");

    return 0;
}