#include<stdio.h>
int main(){
    int array[3][3]={{1,3,5},{7,9,0},{2,4,6}}, i, j, SR=0,SC=0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", array[i][j]);
        }      
        printf("\n");  
    }
    for (i=0; i<1; i++){
        for (j=0; j<3; j++){
            SR = SR + array[i][j];
        }
    }
    printf("Sum of 1st Row = %d\n", SR);
    SR=0;
    for (i=1; i<2; i++){
        for (j=0; j<3; j++){
            SR = SR + array[i][j];
        }
    }
    printf("Sum of 2nd Row = %d\n", SR);
    SR=0;
    for (i=2; i<3; i++){
        for (j=0; j<3; j++){
            SR = SR + array[i][j];
        }
    }
    printf("Sum of 3rd Row = %d\n", SR);
    
    // Sum Of Coloums

    for (i=0; i<3; i++){
        for (j=0; j<1; j++){
            SC = SC + array[i][j];
        }
    }
    printf("Sum of 1st Coloum = %d\n", SC);
    SC=0;
    for (i=0; i<3; i++){
        for (j=1; j<2; j++){
            SC = SC + array[i][j];
        }
    }
    printf("Sum of 2nd Coloum = %d\n", SC);
    SC=0;
    for (i=0; i<3; i++){
        for (j=2; j<3; j++){
            SC = SC + array[i][j];
        }
    }
    printf("Sum of 3rd Coloum = %d\n", SC);
     
    return 0;
}