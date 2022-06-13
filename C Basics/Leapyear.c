// // 3. Write a C program to check whether a year is leap year or not.
// #include <stdio.h>
// int main() {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);

//    if (year % 400 == 0) {
//       printf("%d is a leap year.", year);
//    }

//    else if ((year % 4 == 0) && (year % 100 != 0)) {
//       printf("%d is a leap year.", year);
//    }

//    else {
//       printf("%d is not a leap year.", year);
//    }

//    return 0;
// }

// 3. Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   // if ((year >= 'A' && year <= 'Z')) {

   // }
   switch(year){
      case 1:
      if (year % 400 == 0) {
      printf("%d is a leap year.", year);
      }
      break;
      case 0:
      if ((year % 4 == 0) && (year % 100 != 0)) {
      printf("%d is a leap year.", year);
   }
      break;
      default:
      printf("%d is not a leap year.", year);
   }
return 0;
}
  










// Algorithm Steps in pseudo code:-
// Step-1 : Start
// Step-2 : Declare integer type variables.
// Step-3 : Take a number of 'year' from the user.
// Step-4 : If the 'year' modulo by 400 is equal to 0 then it's true and print 'year' is a leap year otherwise will go to the next else if condition.
// Step-5 : In else if condition, if the 'year' modulo by 4 is equal to 0 and 'year' modulo by 100 isn't equal to 0 then it's true and print 'year' is a leap year otherwise will go to the next else condition.
// Step-6 : In else condition, the statements inside the body of else are executed and print 'year' isn't leap year
// Step-7 : End