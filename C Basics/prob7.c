// Program 07
#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter the Fahrenheit Temp: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("Celsius Temp = %f", celsius);
    return 0;
}