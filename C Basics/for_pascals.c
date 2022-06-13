#include<stdio.h>
int main(){
    int row, colm, num=1, n, space;
    printf("Enter Rows Number: ");
    scanf("%d",&n);
    for (row=0; row<n; row++){
        for (space=row; space<n; space++){
            printf("  ");
        }
        for (colm=0; colm<=row; colm++){
            if (colm == 0 || row == colm)
                num=1;
            else
                num = num*(row-colm+1)/(colm);
        printf("%4d",num);
        }
        printf("\n");
    }
    return 0;
}


// Step-1: Start
// Step-2: Declare variables row, colm, num=1, n & space.
// Step-3: Display a massege "Enter Rows Number: ".
// Step-4: Take user input for number of rows in n variable.
// Step-5: For row=0 to n-1 and increment the row. 
// Step-5.1.1: For space=row to n-1 and increment the space. 
// Step-5.1.2: Print one space and end the for loop which defines for space.
// Step-5.2.1: For colm=0 to colm<=row and increment the colm.
// Step-5.2.2: If colm == 0 or row == colm then set the num to 1 otherwise go to step 5.2.3.
// Step-5.2.3: num = num*(row-colm+1)/(colm).
// Step-5.2.4: Print 3 space and 1 value of num variable and end the for loop which defines for colm.
// Step-5.3: Print a new line and end the for loop which defines for row.
// Step-6: End
    