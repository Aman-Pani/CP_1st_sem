//Calculation of gross salary
#include<stdio.h>
main()
{
    float G_sal,Basic,DA,HRA;
    printf("Enter the Basic Salary:");
    scanf("%f",&Basic);
    DA=0.60*Basic;
    HRA=0.15*Basic;
    G_sal=Basic+DA+HRA;
    printf("Gross Salary:%f",G_sal);

}
