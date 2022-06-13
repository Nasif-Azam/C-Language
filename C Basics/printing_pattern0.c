#include <stdio.h>
int main() {
   for (int i=0; i<3; i++) {
        for(int j=0; j<4; j++){
            printf("* ");
       }
       printf("\n");
   }
// Printing Number
   for (int i=0; i<3; i++) {
        for(int j=1; j<=4; j++){
            printf("%d ", j);
       }
       printf("\n");
   }
   return 0;
}