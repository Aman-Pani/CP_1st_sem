//even perfect squares
#include<stdio.h>
main()
{
    int i,sqr;
    for(i=2;i<=100;i++)
    {
        while(i%2==0)
        {
            sqr=i*i;
            i++;
        }
        //if(sqr<=10000)
            printf("%d\t",sqr);
    }
}
