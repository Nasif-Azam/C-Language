#include <stdio.h>

int main(){
    int arr[20], n, i, j, temp;
    printf("Enter N elements: ");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        arr[i]= n;
        printf("Set %d I/P = ", n);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++) {            
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
         }
    }
    printf("\n%d%d%d%d", arr[0], arr[n-1], arr[1], arr[n-2]);
    return 0;
}