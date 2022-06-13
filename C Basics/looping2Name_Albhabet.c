#include<stdio.h>
int main(){

    char aplhabet;
    int num = 0;
    printf("My Name's Alphabets Are:\n", aplhabet);
    
    aplhabet = 'A';
    while(aplhabet <= 'Z'){
        if(aplhabet == 'N' || aplhabet == 'A' || aplhabet == 'S' || aplhabet == 'I' || aplhabet == 'F'){
        printf("%c\t",aplhabet);
        num++;
        }
        aplhabet++;
    }
    printf("Total Alphabets Numer is: %d", num);

    return 0;
}