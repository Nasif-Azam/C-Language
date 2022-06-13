// Program 01
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("a = %d , b = %d\n", a,b);
    c = a + b;
    printf("%d + %d = %d\n", a,b,c);
    c = a - b;
    printf("%d - %d = %d\n", a,b,c);
    c = a * b;
    printf("%d X %d = %d\n", a,b,c);
    c = a / b;
    printf("%d / %d = %d\n", a,b,c);
    c = a % b;
    printf("%d %% %d = %d", a,b,c);
    return 0;
}