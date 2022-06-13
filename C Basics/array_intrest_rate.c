#include<stdio.h>
int main(){
    int invested_amount = 100, result, interest_rate, years, i, j, k, l;
    float amount;
    
    printf("Enter number of years: ");
    scanf("%d", &years);
    printf("Enter interest rate: ");
    scanf("%d", &interest_rate); 

    int array[years][interest_rate+4];

    printf("Year\t");
    for (j=interest_rate; j<interest_rate+4; j++){
        printf("%d%%\t", j);
    }
    for (i=1; i<years+1; i++){
        printf("\n%d\t", i);    
    }
        
    
    

    return 0;
}