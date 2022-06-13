// Program 04
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if (num % 5 == 0 && num % 11 ==0){
        printf("%d Number is divided by 5 and 11",num);
    }
    
    return 0;
}