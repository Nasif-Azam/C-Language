#include <stdio.h>
#include <math.h>

int main()
{
	float x,sum=0,no_row=1,fact=1;
	int i,n;
	printf("Input the value of x : ");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
    for(i=1; i<n; i++){
        fact = fact*i;
        no_row = pow(x,i);
        sum = sum + (no_row/fact);
    }
	printf("The sum  is : %f",sum+1);
    return 0;
} 