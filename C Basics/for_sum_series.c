#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter Numbers: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum = sum + pow(i,2);
    }
    for(i=1; i<=n; i++){
        if(i>1){
        printf(" + ");
        }
        printf("%d^2  ", i);
    }
    printf("= %d", sum);
    return 0;
}