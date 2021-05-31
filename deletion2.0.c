//deletion without giving index
#include<stdio.h>
main()
{
    int a[100],item,i,n,p;
    printf("size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("enter an item to delete:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            p=i;
            break;
        }
    }
    if(i<n)
    {
        for(i=p;i<n-1;i++)
            a[i]=a[i+1];
        printf("The new array is :");
        for(i=0;i<n-1;i++)
            printf("%d  ",a[i]);
    }
    else
        printf("element not found. ");
}
