#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, result;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    result = 1 << n;
    printf("The value of 2^%d is %d\n", n, result);

return 0;
}