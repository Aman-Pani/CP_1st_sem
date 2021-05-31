//update the content of an array when element value is given
#include<stdio.h>
main()
{
    int s,a[15],i,ele,elen;
    printf("size of array:");
    scanf("%d",&s);
    printf("enter elements:");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("element to be updated:");
    scanf("%d",&ele);
    for(i=0;i<s;i++)
        if(a[i]==ele)
        {
            printf("new element:");
            scanf("%d",&elen);
            a[i]=elen;
            break;
        }
    printf("The new array is:\n");
    for(i=0;i<s;i++)
        printf("%d\t",a[i]);
}
