#include <stdio.h>
#include <string.h>

int main() {
    char firstName[100], lastName[100];
    char fullName[200];

    scanf("%s", firstName);
    scanf("%s", lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    int length = strlen(firstName) + strlen(lastName);

    printf("Nama Lengkap : %s\n", fullName);
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}