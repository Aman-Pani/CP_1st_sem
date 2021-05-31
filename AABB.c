//
#include<stdio.h>
main()
{
    int i,tsq,AA,BB,sqA,sqB;
    for(i=1000;i<10000;i++)
    {
        AA=i/100;
        BB=i%100;
        tsq=sqrt(i);
        sqA=sqrt(AA);
        sqB=sqrt(BB);
        if(tsq*tsq==i && sqA*sqA==AA && sqB*sqB==BB)
            printf("%d/t",i);
    }
}








//////////////
#include<stdio.h>
int main()
{
    int i,j,c;
    for(i=32;i<=99;i++)
    {
        c=0;
        for(j=0;j<=(i*i)%100;j++)
        {
            if(j*j==(i*i)%100)
            {
                c++;
                break;
            }
        }
            for(j=0;j<=(i*i)/100;j++)
            {
                if(j*j==(i*i)/100)
                {
                c++;
                break;
                }
            }

        if(c==2)
            printf("%d\t",i*i);
    }
    return 0;
}
