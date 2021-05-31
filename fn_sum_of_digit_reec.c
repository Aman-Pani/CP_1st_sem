//function sum of digit recn
#include<stdio.h>
int sum(int);
main()
{
    int n;
    printf("enter num: ");
    scanf("%d",&n);
    printf("sum=%d",sum(n));
}
int sum(int m)
{
    if(m==0)
        return 0;
    else
        return(m%10+sum(m/10));
}

