//array multiplication
#include<stdio.h>
main()
{
    int s,a[10],b[10],c[10],i;
    printf("size of array:");
    scanf("%d",&s);
    printf("elements of array a:");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("elements of array b:");
    for(i=0;i<s;i++)
    {
        scanf("%d",&b[i]);
        c[i]=a[i]*b[i];
    }
    printf("new array is:\n");
    for(i=0;i<s;i++)
        printf("%d\t",c[i]);
}
