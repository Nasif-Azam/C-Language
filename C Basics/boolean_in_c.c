#include <stdio.h>
#include <stdbool.h>
int main (){
    int doesSignificantWork,makesBreakthrough;
    bool nobelPrizeCandidate;
    printf("Enter SignificantWork and Breakthrough: ");
    scanf("%d %d", &doesSignificantWork,&makesBreakthrough);
    nobelPrizeCandidate = (doesSignificantWork && makesBreakthrough) ? printf("true") : printf("false");

    return 0;
}

























// int main (){
//     bool temp;
//     int n;
//     scanf("%d", &n);
//     temp = n;
//     if (temp){
//         printf("Running");
//     }
//     else{
//         printf("Not Run");
//     }