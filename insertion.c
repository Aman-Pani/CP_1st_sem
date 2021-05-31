//insertion on array
#include<stdio.h>
main()
{
    int i,size,a[100],pos,ele;
    printf("size of array:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be inserted:");
    scanf("%d",&ele);
    printf("enter the position:");
    scanf("%d",&pos);
    for(i=size;i>=pos;i--)
        a[i]=a[i-1];
        a[i]=ele;
        printf("the new array:\t");
    for(i=0;i<=size;i++)
        printf("%d\t",a[i]);
}
