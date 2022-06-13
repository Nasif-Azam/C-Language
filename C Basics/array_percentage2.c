#include <stdio.h>
int main(){
    int i;
    char a[10]= {'A','B','C',' ',' ',' ','D' };
    char b[10]= {"abcdefghijk"};
    for(i=0; i<10; i++){
    // printf("%c", a[i]);
    printf("%c", b[i]);

    }
    
    return 0;
}