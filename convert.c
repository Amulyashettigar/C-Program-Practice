#include <stdio.h>

int main() {
    char ch;

    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        // Convert to lowercase by adding 32
        ch = ch + 32;
        printf("Lowercase: %c\n", ch);
    } else {
        printf("That is not an uppercase letter.\n");
    }

    return 0;
}
