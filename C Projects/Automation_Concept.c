#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// Start_Variable_Declaration
char admins[5][7] = {"Nasif", "Sohag", "Nerob", "Jahid", "Bsdk"};
char passwords[5][10] = {"006", "008", "004", "001", "555"};
char username[100], user_password[100];
char units[3][10] = {"Voltage", "Current", "Frequency"};
int vcf[3][3] = {{120, 60, 80}, {120, 60, 80}, {120, 60, 80}};
// End_Variable_Declaration
void admin();
void rang();
void VFD_1();
void VFD_2();
void VFD_3();
void check();
int main()
{
    admin(); // Calling_admin()
    return 0;
}
void admin()
{
    printf("\t************** Welcome to SCADA system **************\n");
    printf("\tAdmin Name: ");
    gets(username); // User define Name
    printf("\tPassword: ");
    gets(user_password); // User define Pasword
    // Start Checking Valid Admin
    for (int i = 0; i < 7; i++)
    {
        if ((strcmp(username, admins[i]) == 0) && (strcmp(user_password, passwords[i]) == 0))
        {
            printf("\tHi %s!! Login Success!\n", admins[i]);
            rang(); // Calling rang() to generate random numbers with limit
            VFD_1();
            VFD_2();
            VFD_3();
            check(); // Calling check() to determine fault values
            break;
        }
        else
        {
            printf("\tWrong Password, You can't hack me :D\n");
            break;
        }
    }
    // End Checking Valid Admin
    return;
}
// Start generating random numbers with limit
void rang()
{
    int vol_l_range = 80, vol_up_range = 140, crnt_l_range = 40, crnt_up_range = 100, frq_l_range = 50, frq_up_range = 90;
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vcf[i][0] = (rand() % ((vol_up_range - vol_l_range) + 1)) + vol_l_range;
        }
        for (int j = 0; j < 3; j++)
        {
            vcf[i][1] = (rand() % ((crnt_up_range - crnt_l_range) + 1)) + crnt_l_range;
        }
        for (int j = 0; j < 3; j++)
        {
            vcf[i][2] = (rand() % ((frq_up_range - frq_l_range) + 1)) + frq_l_range;
        }
    }
    return;
}
// End generating random numbers with limit
void VFD_1()
{
    printf("\t----------------------\n");
    printf("\tVFD Panel-1 :-- \n");
    printf("\t----------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t");
        for (int j = 0; j < 9; j++)
        {
            printf("%c", units[i][j]);
        }
        printf(" = %d ", vcf[0][i]);

        printf("\t\n");
    }
    return;
}
void VFD_2()
{
    printf("\t**********************\n");
    printf("\tVFD Panel-2 :-- \n");
    printf("\t----------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t");
        for (int j = 0; j < 9; j++)
        {
            printf("%c", units[i][j]);
        }
        printf(" = %d", vcf[1][i]);

        printf("\n");
    }
    return;
}
void VFD_3()
{
    printf("\t**********************\n");
    printf("\tVFD Panel-3 :-- \n");
    printf("\t----------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t");
        for (int j = 0; j < 9; j++)
        {
            printf("%c", units[i][j]);
        }
        printf(" = %d", vcf[2][i]);

        printf("\t\n");
    }
    printf("\t**********************\n");
    return;
}
// Start checking faulty values
void check()
{
    int vfd_counter = 0; // For identify which VFD getting fault values
    for (int i = 0; i < 3; i++)
    {
        vfd_counter++;
        if (((vcf[i][0]) > 130) || (vcf[i][0] < 90))
        { // For 3 voltage
            printf("VFD(%d), Vlotage %d is faulty.\nEnter a require voltage(90-130)Vol\n", vfd_counter, vcf[i][0]);
            scanf("%d", &vcf[i][0]);
        }
        if (((vcf[i][1]) > 90) || (vcf[i][1] < 50))
        { // For 3 current
            printf("VFD(%d), Current %d is faulty.\nEnter a require Current(50-90)Amp\n", vfd_counter, vcf[i][1]);
            scanf("%d", &vcf[i][1]);
        }
        if (((vcf[i][2]) > 80) || (vcf[i][2] < 60))
        { // For 3 frequency
            printf("VFD(%d), Frequency %d is faulty.\nEnter a require Frequency(60-80)Hz\n", vfd_counter, vcf[i][2]);
            scanf("%d", &vcf[i][2]);
        }
    }
    return VFD_1(), VFD_2(), VFD_3(); // Return to VFD- 1,2,3 to display update values
}
// End checking faulty values