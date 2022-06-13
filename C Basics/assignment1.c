#include<stdio.h>
int main(){
    int A[3][3]={{1,5,2},{3,6,0},{1,3,4}}, B[3][3]={{0,6,2},{2,6,1},{1,7,4}}, Sum[3][3], Sub[3][3];
    printf("Matrix A:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("After Addition:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            Sum[i][j]=A[i][j] + B[i][j];
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }
    printf("After Subtraction:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            Sub[i][j]=A[i][j] - B[i][j];
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}