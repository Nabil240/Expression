#include<stdio.h>
#include<string.h>

int main() {
    char statement[300];
    printf("Write a Mathematical Statement: ");
    fgets(statement, sizeof(statement), stdin);  // Replacing unsafe gets() with fgets()

    // Removing the trailing newline character added by fgets()
    if (statement[strlen(statement) - 1] == '\n') {
        statement[strlen(statement) - 1] = '\0';
    }

    if (strchr(statement, '=') != 0)
        printf("This Statement is solvable.\n");
    else
        printf("This Statement not solvable.\n");

    return 0;
}
