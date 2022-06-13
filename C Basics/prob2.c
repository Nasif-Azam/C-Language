// Program 02
#include <stdio.h>

int main()
{
    char name[10];
    char versity[10];
    int roll;
    printf("Enter Your Name:");
    scanf("%s",&name);
    printf("Name is: %s\n",name);
    
    printf("Enter Your Versity Name:");
    scanf("%s",&versity);
    printf("Versity Name is: %s\n",versity);
    
    printf("Enter Your Roll:");
    scanf("%d",&roll);
    printf("Roll is: %d\n",roll);
    
    printf("Name is: %s\nVersity Name is: %s\nRoll is: %d", name,versity,roll);
    return 0;
}
