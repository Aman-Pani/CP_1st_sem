//second smallest
#include<stdio.h>
main()
{
    int a[15],i,j,s,min,pos;
    printf("size of array:");
    scanf("%d",&s);
    printf("Enter the elements:");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++)
    {
        min=a[i];
        for(j=i+1;j<s;j++)
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        if (min<a[i])
        {
            a[pos]=a[i];
            a[i]=min;
        }
    }
    printf("The second last element is : %d",a[1]);
}

