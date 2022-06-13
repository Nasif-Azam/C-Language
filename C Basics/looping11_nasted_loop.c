#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        for(j=i+1; j<=6;j++){
            k=1;
            while(k<=j){
                k++;
                printf("* ");
            }
        }
    }
    return 0;
}