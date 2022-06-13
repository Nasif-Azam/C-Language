#include<stdio.h>
int main(){
    int array[3][4]={{1,2,3,4},{4,3,2,1},{5,6,7,8}}, i, j;
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            printf("%d\t", array[i][j]);
        }      
        printf("\n");  
    }
    printf("Transpose looks like: \n");
    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("%d\t", array[j][i]);
        }        
        printf("\n");
    }
     
    return 0;
}