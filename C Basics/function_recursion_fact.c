#include<stdio.h>
int main(){
    int n=5;
    printf("Factorial of %d is : %d", n, factFun(n));
    return 0;
}
int factFun(int n){
    long int fact = 1;
    if (n==1)
        return 1;
    else
        fact = n * factFun(n-1);
        return fact;
}