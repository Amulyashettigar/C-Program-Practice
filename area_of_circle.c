#include <stdio.h>
#include <stdlib.h>

int main() {
    float radius, area;
    const float pi = 3.14159;
    //Entering the radius for area calculation
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    //area calculation
    area = pi * radius * radius;
    printf("Area of the circle is: %.3f\n", area);

    return 0;
}
