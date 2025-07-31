#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    char input;
    printf("Enter a Character or Integer(0-9): ");
    scanf("%c", &input);

    if(isdigit(input))
        printf("The input is an integer");
            else if(isalpha(input))
                printf("The input is an Character");
    else
    printf("Not a Character or Integer");
return 0;
}