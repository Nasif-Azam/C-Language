// // 2. Write a Program to take the value from the user as input any alphabet and check whether it is vowel or consonant (Using the switch statement)
// #include <stdio.h>

// int main() {
//     char alphabet;
//     printf("Enter a alphabet: ");
//     scanf("%c", & alphabet);
//     printf("%c", alphabet);
    
//     if ((alphabet >= 'A' && alphabet <= 'Z') || (alphabet >= 'a' && alphabet <= 'z')) {

//         switch (alphabet) {
//             case ('A'):
//             case ('a'):
//             case ('E'):
//             case ('e'):
//             case ('I'):
//             case ('i'):
//             case ('O'):
//             case ('o'):
//             case ('U'):
//             case ('u'):
//                 printf(" is Vowel");
//                 break;
//             default:
//                 printf(" is Consonant");
//                 break;
//         }
//     }
//     else{
//         printf(" is not an alphabet",alphabet);
//     }

//     return 0;
// }


// 2. Write a Program to take the value from the user as input any alphabet and check whether it is vowel or consonant (Using the switch statement)
#include <stdio.h>
#include <ctype.h>

int main() {
    char alphabet;
    printf("Enter a alphabet: ");
    scanf("%c", &alphabet);
    printf("%c", alphabet);
    alphabet = toupper(alphabet);
    
    if (alphabet >= 'A' && alphabet <= 'Z') {

        switch (alphabet) {
            case ('A'):
            case ('E'):
            case ('I'):
            case ('O'):
            case ('U'):
                printf(" is Vowel");
                break;
            default:
                printf(" is Consonant");
                break;
        }
    }
    else{
        printf(" is not an alphabet",alphabet);
    }

    return 0;
}



















// Algorithm Steps in pseudo code:-
// 1: Step-1 : Start.
// 2: Step-2 : Declare charecter variables.
// 3: Step-3 : Take a charecter from the user.
// 4: Step-4 : If user input is A to Z or a to z then it's true and the statements inside the body of if are execute the switch condition for checking this character.
// 5: Step-5 : For switch condition, 12 cases will be checked, and consider the user input.
// 6: Step-6 : If user input isn't A to Z or a to z then the statements inside the body of if are skipped and control will go to the else condition and the statements inside the body of else are executed.
// 7: Step-7 : End