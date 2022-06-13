#include<stdio.h>
int main(){
    int array[3][4]={{1,2,3,4},{4,3,2,1},{5,6,7,8}}, array1[4][3]={0}, i, j;
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            printf("%d\t", array[i][j]);            
        }      
        printf("\n");  
    }
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            array1[j][i] = array[i][j];           
        } 
    }
    
    printf("Transpose looks like: \n");
    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("%d\t", array1[i][j]);
        }        
        printf("\n");
    }
     
    return 0;
}