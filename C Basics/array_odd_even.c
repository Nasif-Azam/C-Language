#include<stdio.h>
int main(){
    int a[10], i, even=0, odd=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    for(i=0; i<10; i++){
        if(a[i]%2 == 0){
            printf("\n%d is even", a[i]);
            even++;
        }
        else{
            printf("\n%d is odd", a[i]);
            odd++;
        }
    }
        printf("\nTotal even numbers are = %d", even);
        printf("\nTotal odd numbers are = %d", odd);

    return 0;
}