#include <stdio.h>
int main(){
    float a[5], result, amount;
    int rate, i;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    printf("Enter the percentage rate: ");
    scanf("%d", &rate);
    for(i=0; i<5; i++){
        result = amount + (amount*rate)/100;
        a[i] = result;
        printf("%d%% = %.2f\t", rate, a[i]);
        rate++;
    }
    
    return 0;
}