//number having equal digits
#include<stdio.h>
main()
{
    int i,n,c,d;
    for(i=10;i<=1000;i++)
    {
        c=1;
        n=i;
        d=n%10;
        while(n>0)
        {
            if(n%10!=d)
            {
                c=0;
                break;
            }
            n=n/10;
        }
        if(c>0)
        printf("%d\t",i);
    }

}
