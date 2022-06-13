#include <stdio.h>
int main(){
    int n, number, i = 1, sum = 0;
    printf("Enter how much value you need: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("Enter your %d numbers: ", n);
        scanf("%d", &number);
        sum = sum + number;
        i++;
    }
    printf("\nYour %d numbers summation is = %d", n, sum);

    return 0;
} 