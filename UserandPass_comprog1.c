#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    while (1) {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(username, "BSCS") == 0 && strcmp(password, "1A") == 0) {
            printf("Access granted\n");
            break;
        } else {
            printf("Access denied\n");
        }
    }

    return 0;
}
