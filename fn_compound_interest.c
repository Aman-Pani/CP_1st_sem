//compound interest
#include<stdio.h>
#include<math.h>
float com_inst(float ,float, float, int);
void main()
{
    float R,T,P;
    int n;
    printf("Principal : ");
    scanf("%f",&P);
    printf("Annual rate : ");
    scanf("%f",&R);
    R/=100;
    printf("Time(in year): ");
    scanf("%f",&T);
    printf("Number of compounding per year : ");
    scanf("%d",&n);
    printf("\nCompound Interest = %f\n",com_inst(P,R,T,n));
}

float com_inst(float P,float R, float T, int n)
{
    return P*pow(1+R/n,n*T)-P;
}
