#include <stdio.h>
#include <string.h>

int main() {
    char firstName[100], lastName[100], fullName[200];
    int length = 0;

    printf("Nama Depan : ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = '\0';

    printf("Nama Belakang : ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = '\0';

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    for (int i = 0; fullName[i] != '\0'; i++) {
        if (fullName[i] != ' ') {
            length++;
        }
    }

    printf("Nama Lengkap : %s\n", fullName);
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}