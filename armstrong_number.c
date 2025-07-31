#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, rem, sum = 0 ;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int temp = num;

    while (num != 0){
        rem = num % 10;
        sum = sum + (rem*rem*rem);
        num = num/10;
    }
    if (sum == temp)
     printf("It is a Armstrong number");
     else
     printf("Not a Armstrong number");

     return 0;
}