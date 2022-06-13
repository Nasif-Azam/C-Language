#include <stdio.h>
int main(){
    int i=1, n;
    printf("Enter The Table Value n : ");
    scanf("%d", &n);
    while (i <= n)
    // while (n)
    {
        printf("%d\t %d\n", i, i*i);
        i++;
        // n--;
        // i++;
    }

    return 0;
}