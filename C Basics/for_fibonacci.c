#include <stdio.h>
int main() {
  int num1=0, num2=1, next_num = num1+num2;
  printf("Fibonacci Series below 1000 is like: %d, %d, ", num1, num2);

  for (int i = 3; i <= 17; i++) {
      if(i>3)
        printf(", ");
        
        printf("%d", next_num);
        num1 = num2;
        num2 = next_num;
        next_num = num1 + num2;
  }

  return 0;
}

// Step 1: Start.
// Step 2: Declare num2=1 and next_num = num1+num2.
// Step 3: Display num1 and num2 like this, "Fibonacci Series below 1000 is like: "
// Step 4: For i=3 to 17 and increment i. 
// Step 4.1: if i is grater than 3 display a comma and end the if statement. 
// Step 4.2: Display the value of the next_num.
// Step 4.3: num1 = num2.        
// Step 4.4: num2 = next_num.
// Step 4.5: next_num = num1 + num2.
// Step 5: End