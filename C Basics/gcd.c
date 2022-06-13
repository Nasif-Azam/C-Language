#include <stdio.h>
int main() {
    int a,b,mod;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    while(a!=0){
        mod=b%a;
        b=a;
        a=mod;
    }
    printf("G.C.D of %d and %d is = %d", a, b, b);
    return 0;
}





#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    int result = gcd(a, b);
    printf("GCD of %d and %d is = %d ", a, b, result);
    return 0;
} 
int gcd(int a, int b){
    if (a == 0){
       return b;
    }
    if ((b == 0) || (a == b)){
       return a;
    }
    if (a > b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }
}