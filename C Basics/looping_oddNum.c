#include<stdio.h>
int main(){
    int n, count;
    printf("Enter The value of n: ");
    scanf("%d", &n);
    printf("All Odd numbers between 1 to %d is: ", n);
    count=1;

    while (count <= n)
    {
        if(count %2 != 0){
            printf("%d\t", count);
        }
        count++;
    }
    
    return 0;
}