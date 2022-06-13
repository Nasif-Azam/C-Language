#include <stdio.h>
int main(){
    char students[][16] = {"Nasif Azam","Zisha","Azam", "Jarin"};
    int score[4][4] = { {10,25,30,10},{10,25,30,10},{10,25,30,10},{10,25,30,10} };
    int total_score[4] = {};
    float cgpa[4] = {};

    for(int i=0; i<4; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum = sum + score[i][j];
        }
        total_score[i] = sum;
        cgpa[i]=total_score[i];
    }
    for(int i=0; i<4; i++){
        printf("%.2f \n", cgpa[i]); 

                switch( total_score[i] % 10 ){
                        case 10:
                        case 9:
                        case 8:
                            cgpa[i] = 4.00;
                            printf("%f", cgpa[i]);
                            break;
                        case 7:
                            cgpa[i] = 3.75;
                            printf("%.2f", cgpa[i]);
                            break;
                        case 6:
                            cgpa[i] = 3.25;
                            printf("%.2f", cgpa[i]);
                            break;
                        case 5:
                            cgpa[i] = 3.00;
                            printf("%.2f", cgpa[i]);
                            break;
                        default:
                            cgpa[i] = 4.00;
                            printf("%.2f", cgpa[i]);
                            break;
                    }
                     }

    return 0;
}
