#include <stdio.h>
int main(){
    int n;
    long int sum = 0, fact;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact = 1;
        for (int j=1; j<=i; j++){
            fact = fact*j;
        }        
            sum = sum + fact;
    }
    printf("Factorial Summation is : %ld", sum);

    return 0;
}