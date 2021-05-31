//GCD
#include<stdio.h>
main()
{
    int a,b;
    printf("enter 2 nums=");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("gcd is %d ",a);
}
