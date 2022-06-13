#include <stdio.h>
int main(){
    int number, i, sum=0, temp=0;
    printf("Enter how many number you need: ");
    scanf("%d", &number);
    for(i=0; i < number; i++){
        temp = (temp*10) + 1;
        printf("%d + ", temp);
        sum = temp + sum;
    }
    printf("\t = %ld", sum);

    return 0;
}


// Step 1: Start.
// Step 2: Declare variables and initialize sum=0 and temp=0.
// Step 3: Read input from user.
// Step 4: If user input number is grated than i and i = 0 then increment i for true condition repeate step 5,6 and 7.
// Step 5: (temp*10) +1 and store the value in temp variable.
// Step 6: Display the temp.
// Step 7: sum = temp + sum.
// Step 8: Display the sum of the given series.
// Step 9: End