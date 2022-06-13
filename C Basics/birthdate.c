#include <stdio.h>
int main(){
    
    int present_date, present_month, present_year,birth_date, birth_month, birth_year, alive_day, leap_year;
        printf("Enter Birth Date: ");
        scanf("%d",&birth_date);
        printf("Enter Birth Month: ");
        scanf("%d",&birth_month);
        printf("Enter Birth Year: ");
        scanf("%d",&birth_year);
        printf("Enter Current Date: ");
        scanf("%d",&present_date);
        printf("Enter Current Month: ");
        scanf("%d",&present_month);
        printf("Enter Current Year: ");
        scanf("%d",&present_year);

    if ( birth_date <= 31 && birth_month <= 12 ){
        if(present_date < birth_date){
            switch (present_month){
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                present_month--;
                birth_date = present_date + 31 - birth_date;
               
                if(present_month > birth_month){
                    birth_month = present_month - birth_month;
                    alive_day = birth_month * 31;
                }
                else
                {
                    birth_month = present_month + 12 - birth_month;
                    present_year--;
                    alive_day = birth_month * 31;
                }
                    alive_day = birth_month * 31;
                    break;
            
            default:
                    present_month--;
                    birth_date = present_date + 31 - birth_date;

                if(present_month > birth_month){
                    birth_month = present_month - birth_month;
                    alive_day = birth_month * 30;
                }
                else
                {
                    birth_month = present_month + 12 - birth_month;
                    present_year--;
                    alive_day = birth_month * 30;
                }
                    alive_day = birth_month * 30;
                    break;
            }             
        }
        else{
             birth_date = present_date - birth_date;
             if (present_month > birth_month){
                 birth_month = present_month - birth_month;
                 alive_day = birth_month * 30;
             }
             else{
                 birth_month = present_month + 12 - birth_month;
                 present_year--;
                 alive_day = birth_month * 30;
             }
        }

     if(present_year > birth_year){
         leap_year = (present_year - birth_year) / 4;
         birth_year = present_year - birth_year;
     }
     else{
         printf("Your Birth Year %d is Bigger than Current Year %d\n", birth_year, present_year);
     }
        printf("%d years %d month %d days\n", birth_year,birth_month,birth_date);
        alive_day = ((birth_year - leap_year) * 365 + (leap_year * 366)) + alive_day + birth_date;
        printf("I am Alive %d Days :)", alive_day); 
    }

    else{
        printf("Wrong Info");
    }
    
    return 0;
}


// Algorithm Steps in pseudo code:-
// Step-1 : Start
// Step-2 : Declare integer type variables.
// Step-3 : Take user birth date, month and year next also take a current date, month, and year.
// Step-4 : Check user give valid years, months, and dates or not.
// Step-5 : If birth date is bigger then a swith statement runs othwise execute else part.
// Step-6 : In switch statement, check months which is contain 31 days or which is contain 30 day in month.
// Step-7 : In switch statement multiple if else nasted if else used.
// Step-8 : If birth date is less then current date then execute the else part.
// Step-9 : In this else part cascaded if statement working to identify the correct date, month, and year.
// Step-10 : In this else part cascaded if statement working to identify the correct date, month, and year.
// Step-11 : If present year is grater then birth year then execute this statement and also check for leap year otherwise controll goes to else part and shows invalid year.
// Step-11 : Then working for total days a person lived in.
// Step-7 : End

