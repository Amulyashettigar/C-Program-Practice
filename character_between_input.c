#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    char char1, char2;
    int charsBetween;

    printf("Enter first character: ");
    scanf(" %c", &char1);

    printf("Enter second character: ");
    scanf(" %c", &char2);
  
    // Number of characters between
    charsBetween = abs(char2 - char1) - 1;  

    // If characters are same or adjacent
    if (charsBetween < 0)
        charsBetween = 0; 

    printf("Number of characters between '%c' and '%c' is: %d\n", char1, char2, charsBetween);

    return 0;
}
