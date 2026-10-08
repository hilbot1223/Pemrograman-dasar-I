#include <stdio.h>

int main(void)
{
    char name[50], address[50], hobby[20], place_date_of_birth[30], ID[20], class_parallel[5], phone_number[20];
    
    printf("Nama\t\t\t: ");
    scanf(" %[^\n]", &name);

    printf("NIM\t\t\t: ");
    scanf(" %[^\n]", &ID);

    printf("Kelas Paralel\t\t: ");
    scanf(" %[^\n]", &class_parallel);

    printf("Tempat/Tanggal Lahir\t: ");
    scanf(" %[^\n]", &place_date_of_birth);

    printf("Alamat\t\t\t: ");
    scanf(" %[^\n]", &address);

    printf("Hobby\t\t\t: ");
    scanf(" %[^\n]", &hobby);

    printf("No.HP\t\t\t: ");
    scanf(" %[^\n]", &phone_number);

    printf("\n\n");
    printf("Nama\t\t\t: %s\n", name);
    printf("NIM\t\t\t: %s\n", ID);
    printf("Kelas Paralel\t\t: %s\n", class_parallel);
    printf("Tempat/Tanggal Lahir\t: %s\n", place_date_of_birth);
    printf("Alamat\t\t\t: %s\n", address);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", phone_number);

return 0;
}