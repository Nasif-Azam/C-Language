#include<stdio.h>
#include <conio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int prime = testPrime(n);
    if(prime == 1){
        printf("%d is a Prime Number", n);
    }
    else{
        printf("%d is a Non-Prime Number", n);
    }

    return 0;
}
int testPrime(int n){
    int result = 1;
    for(int i=2; i<=(n-1); ++i){
        if(n%i == 0){
            result = 0;
            break;
        }
    }
    return result;
}  