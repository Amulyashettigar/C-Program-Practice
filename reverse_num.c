#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, digit, reverse = 0;
    printf("Enter the number to be reversed:");
    scanf("%d", &num);

    while(num!=0){
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num /= 10;

    }
    printf("The reversed number is %d", reverse);

return 0;
}