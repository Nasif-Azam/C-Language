#include <stdio.h>
int main(){
    int n, temp, product=1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    while (n != 0)
    {
        temp= n%10;
        product = product * temp;
        n = n/10;
        
    }
    printf("The production is= %d", product);

    return 0;
}

// Step 1: Start.
// Step 2: Declare variables and initialize product=1.
// Step 3: Read input from user.
// Step 4: If user input is true repeate step 5,6,7 and 8.
// Step 5: Mod user input by 10 and store in temp variable.
// Step 6: product = product * temp.
// Step 7: Display temp.
// Step 8: n = n/10.
// Step 9: Display the product of the given digits.
// Step 10: End