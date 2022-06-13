#include <stdio.h>
int main(){
    int a[10]={0}, digits, number;
    printf("Enter the number: ");
    scanf("%d", &number);
    while (number)
    {
        digits = number%10;
        a[digits] = a[digits]+1;
        number = number/10;
    }
    for(digits=0; digits<10; digits++){
        printf("a[%d] == %d\n",digits, a[digits]);
    }
    for(digits=0; digits<10; digits++){
        if(a[digits]>1){
            printf("%d is reapeted\n",digits);
        }
    }
    
    
    return 0;
}