#include<stdio.h>
int main(){
    int a[3][5], i, j;
    int b[4][3]={{1,50,55}, {2,60,65}, {3,70,75}, {4,80,85}};
    printf("%d ",b[3][2]);
    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter the array values: \n");
    for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            printf("Enter a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}