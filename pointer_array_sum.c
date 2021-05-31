#include<stdio.h>
main()
{
    int a[10],s,i,sum=0,*p;
    printf("Size of array : ");
    scanf("%d",&s);
    p=a;
    printf("Enter the array : ");
    for(i=0;i<s;i++)
        scanf("%d",p+i);
    for(i=0;i<s;i++)
        //sum=sum+*(p+i);
        {
            sum+=*p;
            p++;
        }
    printf("sum : %d\n",sum);
}

