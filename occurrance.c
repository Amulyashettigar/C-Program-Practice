#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, digit, rem =0, count = 0;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("Enter the digit that you want to check for occurrance: ");
    scanf("%d", &digit);

    while(num != 0){
        rem = num % 10;
        if(rem == digit)
            count++;
        num /= 10;

    }
    printf("The number of occurrance of digit %d is %d", digit, count);
    return 0;
}