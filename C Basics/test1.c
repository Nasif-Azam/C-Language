// Program 04
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if (num == 0){
        printf("%d Number is zero",num);
    }
    else if (num > 0){
        printf("%d Number is Positive",num);
    }
    else {
        printf("%d Number is negative",num);
    }
    
    return 0;
}