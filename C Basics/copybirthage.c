#include<stdio.h>
    int main(){

    age_checker();

    return 0;
    }


    void age_checker(){
        int user_day, user_month, user_year, current_day, current_month, current_year;
        printf("Enter your date of birth like this format dd mm yyyy:");
        scanf("%d %d %d", &user_day, &user_month, &user_year);
        printf("Enter Todays date like this format dd mm yyyy:");
        scanf("%d %d %d", &current_day, &current_month, &current_year);
        age(current_day, current_month, current_year, user_day, user_month, user_year);
    }


    void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
       if (birth_date > present_date) {
          present_date = present_date + month_day_return(present_month, present_year);
          present_month = present_month - 1;
       }
       if (birth_month > present_month) {
          present_year = present_year - 1;
          present_month = present_month + 12;
       }
       int final_date = present_date - birth_date;
       int final_month = present_month - birth_month;
       int final_year = present_year - birth_year;
       printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
       printf("\nTotal Days: %d", (final_year/4)+ (final_year*365)+ (final_month*30) +final_date );
    }
    int month_day_return (int present_month, int present_year){
       if (((present_year % 4 == 0) && (present_year % 100!= 0)) || (present_year%400 == 0))
            return 29;
        int output = 0;
        switch(present_month){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                output = 31;
                break;
                case 4:
                case 6:
                case 9:
                case 11:
                output = 30;
                break;
                default:
                output = 28;
        }
    return output;

    }