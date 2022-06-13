#include<stdio.h>
int main(){

    int count, n;
    printf("Enter The value on n\n");
    scanf("%d",&n);
    printf("%d Natural numbers are: \n", n);
    n++;
    
    count = 1;
    while(count < n){
        printf("%d\n", count);
        count++;
    }
    
    // int count, n;
    // printf("Enter The value on n\n");
    // scanf("%d",&n);
    // printf("%d Natural numbers are: \n", n);
    
    // count = 1;
    // while(n){
    //     printf("%d\n", count);
    //     count++;
    //     n--;
    // }



    // int count, n;
    // printf("Enter The value on n\n");
    // scanf("%d",&n);
    // printf("All odd numbers between 1 to %d are:\n", n);
    
    // count = 1;
    // while(count <= n){
    //     // if(count % 2 == 1){
    //     //     printf("%d\t",count);
    //     // }
    //     count = count + 2;
    //     printf("%d\t",count);
    // }

    return 0;
}