#include <stdio.h>
int main(){
	int n,i,c;
    printf("Enter a number: ");
    scanf("%d", &n);
    c=0;
    for(i=1; i<=n; i++){
        if(n%i == 0){
            c++;
        }
    }
    if(c<=2){
        printf("%d is prime number", n);
    }
    else{
         printf("%d is not prime number", n);
    }
    return 0;
} 