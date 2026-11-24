#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int vowels = 0, consonants = 0;

    printf("Kalimat : ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);

        if (ch == 'a' || ch == 'i' || ch == 'u' ||
            ch == 'e' || ch == 'o') {
            vowels++;
        } else if (isalpha(ch)) {
            consonants++;
        }
    }

    printf("Jumlah Vokal : %d\n", vowels);
    printf("Jumlah Konsonan : %d\n", consonants);

    return 0;
}