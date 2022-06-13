#include<stdio.h>
int main(){
    int array[3][3]={{1,3,5},{7,9,0},{2,4,6}}, i, j, SR, SC;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", array[i][j]);
        }      
        printf("\n");  
    }
    for (i=0; i<3; i++){
        SR=SC=0;
        for (j=0; j<3; j++){
            SR = SR + array[i][j];
            SC = SC + array[j][i];
        }
        printf("Sum of Row = %d    Sum of Col = %d\n", SR, SC);
    }
    
     
    return 0;
}