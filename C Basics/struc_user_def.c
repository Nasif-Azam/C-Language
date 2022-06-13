#include <stdio.h>
int main(){
    typedef struct{
        char name[20];
        int id;
        char versity_keyword[10];
        float grade;
    } STUDENT;
    STUDENT details = {"Nasif Azam", 211015006, "GUB", 3.75};
    printf("Name = %s\nID = %d\nVersity Keycode = %s\nCPGA = %.2f", details.name, details.id, details.versity_keyword, details.grade);
    printf("\nChange student name: ");
    gets(details.name);
    printf("Name = %s\nID = %d\nVersity Keycode = %s\nCPGA = %.2f", details.name, details.id, details.versity_keyword, details.grade);
    return 0;
}