#include<stdio.h>
int main(){
    int i,n;
    long long int fact;
    printf("Enter Numbers: ");
    scanf("%d", &n);
    i=1, fact=1;
    for(i; i<=n; i++){
        fact = fact*i;
    }
    printf("Factorial is = %ld", fact);
    return 0;
}