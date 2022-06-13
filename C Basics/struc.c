#include <stdio.h>
int main(){
    typedef struct{
        char name[50];
        int id;
        float cgpa;
    } STUDENT;
    STUDENT details;
    printf("Enter your name: ");
    gets(details.name);
    printf("Enter your ID: ");
    scanf("%d", &details.id);
    printf("Enter cpga: ");
    scanf("%f", &details.cgpa);
    printf("Name=%s\nID=%d\nCPGA=%.2f", details.name, details.id, details.cgpa);
    return 0;
}