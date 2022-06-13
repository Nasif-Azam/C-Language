#include<stdio.h>
int main(){
    float ct1,ct2,ct3;
    printf("Enter CT-1 Mark: ");
    scanf("%f",&ct1);
    printf("Enter CT-2 Mark: ");
    scanf("%f",&ct2);
    printf("Enter CT-3 Mark: ");
    scanf("%f",&ct3);
    printf("\nCalculated Mark is: %.2f", CTcalculate(ct1,ct2,ct3));

    return 0;
}
float CTcalculate(float ct1, float ct2, float ct3){
    float total;
    if((ct1 && ct2) > ct3){
        total = (ct1+ct2);
    }
    else if((ct1 && ct3) > ct2){
        total = (ct1+ct3);
    }
    else{
        total = (ct2+ct3);
    }
    return total/2;
}