#include <stdio.h>
#include <string.h>

int main() {
    char description[500];

    fgets(description, sizeof(description), stdin);

    description[strcspn(description, "\n")] = '\0';

    if (strlen(description) > 20) {
        for (int i = 0; i < 20; i++) {
            printf("%c", description[i]);
        }
        printf("...");
    } else {
        printf("%s", description);
    }

    printf("\n");
    
    return 0;
}