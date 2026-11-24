#include <stdio.h>
#include <string.h>

struct participant {
    char name[100];
    int age;
    int score;
};

int main() {
    struct participant p;
    printf("Nama : ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Umur : ");
    scanf("%d", &p.age);

    printf("Skor : ");
    scanf("%d", &p.score);

    printf("Data peserta:\n");
    printf("Nama : %s\n", p.name);
    printf("Umur : %d tahun\n", p.age);
    printf("Skor : %d\n", p.score);

    return 0;
}