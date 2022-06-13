#include<stdio.h>
int main(){

    char count;
    printf("A to Z alphabets are:\n", count);
    count = 'A';
    while(count <= 'Z'){
        printf("%c\t",count);
        count++;
    }

    return 0;
}