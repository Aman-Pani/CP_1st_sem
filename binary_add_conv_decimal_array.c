//addition of binary digit and convert into decimal
#include<stdio.h>
main()
{
    int a[5],i,j,siz,x,p,dc;
    printf("size of array:");
    scanf("%d",&siz);
    printf("Enter elements:\n");
    for(i=0;i<siz;i++)
        scanf("%d",&a[i]);
    for(i=0;i<siz;i++)
        p=0;
        dc=0;
        while(a[i]>0)
        {
            x=a[i]%10;
            dc=dc+(x*pow(2,p));
            a[i]=a[i]/10;
            p++;

        }
     printf("number in decimal=\t");
    for(i=0;i<siz;i++)
        printf("%d\t",);
}
