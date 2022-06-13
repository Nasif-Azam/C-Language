#include <stdio.h>
int main() {
    int star=0;
   for (int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++){
            printf("* ");
       }
       printf("\n");
   }
// Printing Number
    for (int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
    printf("\n");
   }
// Printing Number
    for (int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            star++;
            printf("%d ", star);
        }
    printf("\n");
   }
   return 0;
}