#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int palindrome = 1;

    scanf("%s", word);

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        word[i] = tolower(word[i]);
    }

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Kata '%s' adalah palindrom", word);
    } else {
        printf("Kata '%s' bukan palindrom", word);
    }

    return 0;
}