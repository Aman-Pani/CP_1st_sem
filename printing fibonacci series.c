//printing fibonacci series upto nth term
#include<stdio.h>
main()
{
    int n,f1,f2,fib,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("%d\t%d\t",f1,f2);
    i=3;
    while(i<=n)
    {
        fib=f1+f2;
        printf("%d\t",fib);
        f1=f2;
        f2=fib;
        i++;
    }
}
