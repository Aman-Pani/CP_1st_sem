#include<stdio.h>
main()
{
    int a[100],i,n,x;
    printf("size of array:");
    scanf("%d",&n);
    if(n%2==0)
    {
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i=i+2)
        {
            x=a[i];
            a[i]=a[i+1];
            a[i+1]=x;
        }
        printf("After swapping:\n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    }
    else
        printf("\nTake even number of elements.");
}

