#include <stdio.h>
int main(){
    int i;
    float marks[5], sum=0, avg;
    printf("Enter 5 Students Marks: ");
    for(i=0; i<5; i++){
        scanf("%f", &marks[i]); 
    }
    printf("5 Students Marks are: ");
    for(i=0; i<5; i++){
        printf("%.2f ", marks[i]);
        sum = sum + marks[i];
        avg = sum / 5;
    }
    printf("\nSum of marks is= %.2f\nAvarage of marks is= %.2f", sum, avg);
    
    
    return 0;
}