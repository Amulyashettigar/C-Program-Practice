#include <stdio.h>

int main() {
    int n, term = 0, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        term = term * 10 + 1;  // Generate term like 1, 11, 111, ...
        printf("%d", term);
        if (i < n)
            printf(" + ");
        sum += term;
    }

    printf("\nSum of the series = %d\n", sum);

    return 0;
}
