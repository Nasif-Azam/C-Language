// Program 06
#include <stdio.h>
// #define Const 1.8

int main()
{
    float celsius, fahrenheit;
    printf("Enter the Celsius Temp: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5 ) + 32;
    printf("Fahrenheit Temp = %f", fahrenheit);
    return 0;
}