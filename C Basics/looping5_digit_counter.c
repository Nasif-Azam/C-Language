#include <stdio.h>
int main(){
    // int n, count=0;
    // printf("Enter The Value n : ");
    // scanf("%d", &n);
    // if(n == 0){
    //     printf("Number of digit is: 1");
    // }
    // else{
        
    // while (n)
    // {
    //     n = n / 10;
    //     count++;
    // }
    // printf("Number of digit is: %d", count);
    // }

    int n, count=0;
    printf("Enter The Value n : ");
    scanf("%d", &n);

    do{
        count++;
        n = n / 10;
    }            
    while (n);
    printf("Number of digit is: %d", count);

    return 0;
}

// Step1: Start
// Step2: declare n, count.
// read n;
// Step3: if nonnegative number n = 0 then evaluate if statements body and write "digit is 1" otherwise control goes to step 4.
// Step4: in else part if n is not equal to 0 then n = n/10 and increment the counter when n = 0 then looping is end and print the digit number.
// Step4: End.
