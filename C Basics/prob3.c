// Program 03
#include <stdio.h>

int main()
{
    float cm,m,km;
    printf("Enter the cm:");
    scanf("%f", &cm);
    m = cm / 100;
    km = m / 1000;
    // km = cm /100000;
    printf("m = %f\nkm = %f", m,km);
    return 0;
}