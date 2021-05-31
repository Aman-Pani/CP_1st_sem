//numbers upto 100 not divisible by 2 & 3
#include<stdio.h>
main()
{
    int n;
    for(n=1;n<=100;n++)
    {
        if(n%2!=0&&n%3!=0)
            printf("%d\t",n);
    }
}
