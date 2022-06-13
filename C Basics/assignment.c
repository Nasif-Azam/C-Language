#include <stdio.h>
int main(){
    char students[][16] = {"Nasif","Zisha","Azam","Sohag","Tarun","Arif"};
    int score[6][4] = { {10,22,35,12},{12,25,37,15},{5,25,20,0},{5,15,15,10},{15,15,20,15},{5,5,10,10} };
    int total_score[4];
    float cgpa[4];
    
    for(int i=0; i<6; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum = sum + score[i][j];
        }
        total_score[i] = sum;
    }
    int count=0;  
    for(int i=0; i<1; i++){
        for(int j=0; j<6; j++){
            printf("\n%s:",students[count]);
            printf("\n");
            printf("CT Avg(15), Mid(30), Final(40), Others(15)---> CGPA(4.00)\n");
            for(int i=0; i<1; i++){
                for(int j=0; j<4; j++){
                    printf("     %d     ",score[count][j]);
                }
                    switch( total_score[count] / 10 ){
                        case 10:
                        case 9:
                        case 8:
                            cgpa[count] = 4.00;
                            printf("%.2f", cgpa[count]);
                            break;
                        case 7:
                            cgpa[count] = 3.75;
                            printf("%.2f", cgpa[count]);
                            break;
                        case 6:
                            cgpa[count] = 3.25;
                            printf("%.2f", cgpa[count]);
                            break;
                        case 5:
                            cgpa[count] = 3.00;
                            printf("%.2f", cgpa[count]);
                            break;
                        case 4: 
                            cgpa[count] = 2.70;
                            printf("%.2f", cgpa[count]);
                            break;
                        case 3:
                            cgpa[count] = 2.00;
                            printf("%.2f", cgpa[count]);
                            break;
                        default:
                            printf("Fail");
                    }
                printf("\n");
            }
            count++;
        }        
    }
    return 0;
}