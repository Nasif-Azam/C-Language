// 1. Write a C program to find maximum between three numbers.
#include <stdio.h>
int main()
{
    float num1, num2, num3; 
    printf("Enter Theree number: ");
    scanf("%f %f %f",&num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3){
        printf("%.2f is the Maximum Number",num1);
    }
    else if (num2 >= num1 && num2 >= num3){
        printf("%.2f is the Maximum Number",num2);
    }
    else {
        printf("%.2f is the Maximum Number",num3);
    }
    
    return 0;
}
// Algorithm Steps in pseudo code:-
// 1: Step1: Start
// 2: step2: Declare float type 3 variables.
// 3: step3: Take three number from user.
// 4: step4: If the num1 is maximum then it's true and the statements inside the body of if are executed otherwise will go to the next condition.
// 5: step5: If the num2 is maximum then it's true and the statements inside the body of if are executed otherwise will go to the next condition.
// 6: step6: If the num1 and num2 isn't maximum then the statements inside the body of else are executed.
// 7: step7: End