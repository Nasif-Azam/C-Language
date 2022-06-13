#include<stdio.h>
int main(){
    int a,b,c=14;
    int *p;
    p=&c;
    // *p=14;
    // printf("%p\n%p", &a,&b);
    printf("\n%d %p",c,&c);
    printf("\n%p %d %d %p\n",p,*p,c,&p);
    return 0;
}