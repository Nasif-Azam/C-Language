// Program 04
#include <stdio.h>

void main()
{
    float height;
    float width;
    float Rec_Area;
    printf("Enter the Rectangle Height:");
    scanf("%f", &height);
    printf("Enter the Rectangle Width:");
    scanf("%f", &width);
    Rec_Area = height * width;
    printf("Rectangle Area = %f", Rec_Area);
    return;
}