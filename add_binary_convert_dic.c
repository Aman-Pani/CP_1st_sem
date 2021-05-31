//addition of binary digit and convert into decimal
#include<stdio.h>
main()
{
    int n1,n2,i,j,sum,dc1=0,dc2=0,p;
    printf("1st binary number=");
    scanf("%d",&n1);
    p=0;
    while(n1>0)
    {
        i=n1%10;
        dc1=dc1+(i*pow(2,p));
        n1=n1/10;
        p++;
    }
    //printf("1st num in decimal= %d",dc1);
    printf("2nd binary number=");
    scanf("%d",&n2);
    p=0;
    while(n2>0)
    {
        j=n2%10;
        dc2=dc2+(j*pow(2,p));
        n2=n2/10;
        p++;
    }
    //printf("2nd num in decimal= %d",dc2);
    sum=dc1+dc2;
    printf("sum in decimal = %d",sum);
}
