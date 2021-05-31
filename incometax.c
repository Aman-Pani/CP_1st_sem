//income tax
#include<stdio.h>
main()
{
    float tax,amt;
    printf("Enter amount:");
    scanf("%f",&amt);
    if(amt<=150000)
        tax=0*amt;
    else if(amt>150000&&amt<=300000)
        tax=amt*10/100;
    else
        tax=amt*20/100;
    printf("Tax is:%f",tax);

}

