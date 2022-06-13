#include <stdio.h>
int main(){
    int i=1, n, sum=0;
    printf("Enter The Value n : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum= sum+i;
        printf("%d\t", sum);
        i++;
    }
    printf("\nThe summation is %d", sum);

    return 0;
}