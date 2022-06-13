#include <stdio.h>
int main(){
    int a[50],i;
    printf("Numbers: ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]); //user I/P array
    }
    for(i=0; i<5; i++){
        printf("%d ",a[i]); //print array
    }
    printf("\nRevers is: ");
    for(i=4; i>=0; i--){
        printf("%d ",a[i]); //print reaversed array
    }
    for(i=0; i<50; i++){
        if (i<25)
        {
            a[i] = 25;
        }
        else{
            a[i] = 50;
        }
    }
    printf("\n");
    for(i=0; i<50; i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}