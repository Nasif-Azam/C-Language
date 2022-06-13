#include<stdio.h>
int main(){
    int n=3;
    printf("%d", func(n));
    return 0;
}
int func(int n){
    if (n==1)
        return 1;
    else
        return 1 + func(n-1);
    
}
// int main(){
//     printf("%d", func(4));
//     return 0;
// }
// int func(int n){
//     if (n==0)
//         return 1;
//     else
//         return 7 + func(n-2);
    
// }