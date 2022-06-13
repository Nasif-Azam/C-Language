#include<stdio.h>
#include <conio.h>
int main(){
    int e,arr[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0; i<=20; i++){
        printf("%d ", arr[i]);
    }
    int result = check(e);
    printf("\nEven=%d ",result);
    return 0;
}
int check(int arr[]){
    int evenCount=0, oddCount=0, even[50], odd[50];
    for(int i=0; i<=20; i++){
        if(arr[i]%2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    return evenCount;
    }
