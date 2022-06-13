#include<stdio.h>
int main(){
    int a[3][5], i, j;
    int b[4][3]={{1,50,55}, {2,60,65}, {3,70,75}, {4,80,85}};
    int vcf[3][3]={{180,120,70}, {180,120,70}, {180,120,70}};
    for (i=0; i<3; i++){
            j=0;
            printf("%d\t", vcf[i][j]);
        
        printf("\n");
    }
    
    
    return 0;
}



