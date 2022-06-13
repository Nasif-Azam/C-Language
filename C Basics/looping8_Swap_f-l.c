#include <stdio.h>
int main()
{
    int temp, number, swap, rev = 1, first_digit, last_digit, mod, d;
    printf("Enter the number : ");
    scanf("%d", &number);
    if(number/10 == 0){
        printf("The single number %d isn't swappable", number);
    }
    else{
    temp = number;
    last_digit = number % 10;
    while(number > 10){
        number = number / 10;
    }
        first_digit = number;
        number = temp/10;
    while (number > 10){
        mod = number % 10;
        rev = (rev * 10) + mod;
        number = number / 10;
    }
    swap = last_digit;
    while (rev > 10){
        d = rev %10;
        swap = (swap * 10) + d;
        rev = rev / 10;
    }
        swap = swap * 10 + first_digit;
        printf ("Swaping 1st and lst digit number is: %d", swap);
    }
    return 0;
}


// Step 1: Start.
// Step 2: Declare variables and initialize rev=1.
// Step 3: Read input from the user.
// Step 4: If user input is a single number then display a message "Single never be swappable" otherwise control will go for the next steps.
// Step 5: Copy the user input in the temp variable.
// Step 6: Find the last digit by using modulus (number%10).
// Step 7: If user input is greater than 10, then repeat step 8.
// Step 8: Divide the user input number by 10 and store it in the number variable.
// Step 9: Initial the user input number to first_digit variable.
// Step 10: Divide the temp value by 10 and store in the number variable.
// Step 11: Again if user input is greater than 10, then repeat step 12, 13 and 14.
// Step 12: mod = number % 10.
// Step 13: rev = (rev * 10) + mod.
// Step 14: number = number / 10.
// Step 15: Initial the last digit to swap variable.
// Step 16: If rev variable value is greater than 10, then repeat step 17, 18 and 19.
// Step 17: d = rev %10.
// Step 18: swap = (swap * 10) + d.
// Step 19: rev = rev / 10.
// Step 20: Multiple 10 with swap variable and add first digit.
// Step 21: Display the swapping number.
// Step 22: End.
