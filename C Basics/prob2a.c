// Program 02
#include <stdio.h>
#define PI 3.1415

int main()
{
    float Radius,Area,Circumference;
    printf("Enter radius of circle: ");
    scanf("%f",&Radius);
    Area = PI * Radius * Radius;
    printf("Area of circle = %f\n", Area);
    Circumference = 2 * PI * Radius;
    printf("Circumference of circle = %f", Circumference);
    return 0;
}