#include<stdio.h>
    int vcf[3][3]={{180,120,80}, {150,115,90}, {175,112,95}};
    char units[3][10] = {"Voltage","Current","Frequency"};
int main(){
    VFD_1();
    VFD_2();
    VFD_3();
    return 0;
}
void VFD_1(){
    printf("**********************\n");
    printf("VFD Panel-1 :-- \n");
    printf("**********************\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            printf("%c", units[i][j]);
        }
            printf(" = %d ", vcf[0][i]);
        
        printf("\n");
    }
    return;
}