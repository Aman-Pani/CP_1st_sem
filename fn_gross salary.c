// Gross salary = Basic Salary + DA(60%) + HRA(15%)
#include <stdio.h>
float salary(float);
int main()
{
    float basic;
    printf("Enter Basic Salary :");
    scanf("%f", &basic);
    printf("Gross Salary :%f\n", salary(basic));
    return 0;
}
float salary(float basic)
{
    float gross,da,hra;
    da = 0.6*basic;
    hra = 0.15*basic;
    gross = basic+da+hra;
    return gross;
}
