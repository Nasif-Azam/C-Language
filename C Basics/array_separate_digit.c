#include <stdio.h>
int main(){
    int a[10], i=0, number, counter=0; 
    printf("Enter the number: ");
    scanf("%d", &number);
    while (number)
    {
        a[i] = number%10;
        number = number/10;
        i++;
        counter++;
    }
    for(i=0; i<counter; i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}