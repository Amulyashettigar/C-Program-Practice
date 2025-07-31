#include <stdio.h>
#include <stdlib.h>

int main(){
    float cel, fah;
    printf("Enter the value of Celsius: ");
    scanf("%f", &cel);

    fah = (cel *1.8) + 32;
    printf("The Fahrenheit  value is %f", fah);

return 0;
}