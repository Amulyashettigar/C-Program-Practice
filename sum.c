#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num1, num2;
    int sum;
   
    srand(time(NULL));
    num1 = rand() % 100;  // Random number between 0 and 99
    num2 = rand() % 100;

    sum = num1 + num2;

    printf("Random numbers: %d and %d\n", num1, num2);
    printf("Sum = %d\n", sum);

return 0;

}