#include <stdio.h>

int main() {
    int a[3][3]={{1,2,3},{4,9,8},{4,2,7}}, b[3][3]={{8,9,1},{0,2,0},{8,9,3}}, c[3][3], i, j;
    printf("First matrix is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Second matrix is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    printf("Adding 2 matrixs are: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}