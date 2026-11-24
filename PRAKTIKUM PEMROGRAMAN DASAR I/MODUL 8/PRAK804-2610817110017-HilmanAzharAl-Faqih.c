#include <stdio.h>
#include <string.h>

struct participant {
    char name[100];
    int age;
    int score;
};

int main() {
    int N;
    scanf("%d", &N);

    struct participant class[10];

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d", class[i].name, &class[i].age, &class[i].score);
    }

    int max = 0;

    for (int i = 1; i < N; i++) {
        if (class[i].score > class[max].score) {
            max = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", class[max].name, class[max].score);

    return 0;
}