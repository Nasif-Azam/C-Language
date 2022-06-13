#include<stdio.h>
int main(){
    int array[3][3], i, j, sum=0, sum1=0;
    printf("Enter array values: ");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &array[i][j]);
        }        
    }
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", array[i][j]);
            sum = sum + array[i][j];
        }        
        printf("\n");
    }
    printf("Sum = %d\n", sum);
    // sum=0;
    for (i=0; i<3; i++){
        for (j=1; j<3; j++){
            sum1 = sum1 + array[i][j];
        }        
    }
    printf("Selected Sum = %d", sum1);
    
    return 0;
}