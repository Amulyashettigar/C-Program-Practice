#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, reverse = 0, temp , digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Save the original number

    while (num != 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num /= 10;
    }

    if (temp == reverse)
        printf("%d is a palindrome.\n", temp);
    else
        printf("%d is not a palindrome.\n", temp);

    return 0;
}
