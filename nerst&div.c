//nearest number less than & divisible
#include<stdio.h>
main()
{
    int n;
    for(n=1000;n>=1;n--)
    {
        if(n%18==0 && n%32==0)
        {
            printf("nearest num. is=%d",n);
            break;
        }
    }
}

