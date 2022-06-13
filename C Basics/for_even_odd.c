#include<stdio.h>
int main(){
    int n,num,ecount,ocount,i;
    ecount =0, ocount=0;
    scanf("%d", &num);
    for(i=0; i<n; i++){
        if (num % 2 == 0){
            printf("Num is even");
            ecount++;
        }
        else{
            printf("Num is odd");
            ocount++;
        }
    }
    printf("Even count in the list of %d numbers is %d\n",n,ecount);
    printf("Odd count in the list of %d numbers is %d\n",n,ocount);

    return 0;
}