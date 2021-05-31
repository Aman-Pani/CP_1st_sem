//prime num
#include<stdio.h>
main()
{
    int i,rng,j,c;
    printf("enter range:");
    scanf("%d",&rng);
    for(i=2;i<=rng;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            c++;
        }
        if(c==0)
            printf("%d\t",i);
    }
}

