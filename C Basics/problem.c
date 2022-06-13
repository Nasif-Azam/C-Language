#include<stdio.h>
int main()
{
   int range, result;
   printf("How much range do you want: ");
   scanf("%d", &range);
   result = sum(range);
   printf("Summation is = %d", result);
}
int sum(int n){
   int x = 0;
   for(int i=1; i<=n; i++){
     x = x+i;
   }
   return x;
}