#include <stdio.h>
#include <string.h>

int main() {
    char code[200], message[200];
    char result[200];
    int stars = 0, hashes = 0;

    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);

    code[strcspn(code, "\n")] = '\0';
    message[strcspn(message, "\n")] = '\0';

    if (strlen(code) != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        int length = strlen(code);

        for (int i = 0; i < length; i++) {
            if (code[i] == message[i]) {
                if (code[i] == ' ') {
                    result[i] = ' ';
                } else {
                    result[i] = '*';
                    stars++;
                }
            } else {
                result[i] = '#';
                hashes++;
            }
        }
        result[length] = '\0';

        printf("%s\n", result);
        printf("* = %d\n", stars);
        printf("# = %d\n", hashes);

        if (stars >= hashes) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }

    return 0;
}