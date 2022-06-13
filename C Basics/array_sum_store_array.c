#include<stdio.h>
int main(){
    int a[5], b[5], i, sumArr[5];
    printf("Enter 1st Array 5 elements: ");
    for (i=0; i<5; i++){
        scanf("%d", &a[i]);
    }    
    for (i=0; i<5; i++){
        printf("%d ", a[i]);
    }    
    printf("\nEnter 2nd Array 5 elements: ");
    for (i=0; i<5; i++){
        scanf("%d", &b[i]);
    }
    for (i=0; i<5; i++){
        printf("%d ", b[i]);
    }
    for(i=0; i<5; i++){
        sumArr[i] = a[i] + b[i];
    }
    printf("\nSum of 2 arrays elements are: ");
    for (i= 0; i<5; i++){
        printf("\nIndex Sum[%d] = %d",i, sumArr[i]);
        printf("\t%d ", sumArr[i]);
    }
    
    return 0;
}