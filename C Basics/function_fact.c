#include<stdio.h>
int main(){
    int n;
    printf("Enter Numbers: ");
    scanf("%d", &n);
    long int fact = factorial(n);
    printf("Factorial of %d = %ld",n, fact);
}
int factorial(int n){
    long int fact = 1;
    for (int i=1; i<=n; i++){
        fact = fact*i;
    }
    
    return(fact);
}