#include <stdio.h>

int main(void) {
    char userName[100];

    printf("Please enter your name: ");

    scanf_s("%s", userName, (unsigned int)sizeof(userName));

    printf("Your name is: %s!\n", userName);
    printf("Press any key to exit...");
    return 0;
}

