//binary search
#include<stdio.h>
main()
{
    int a[15],s,i,low=0,high,mid,ele;
    printf("size of array:");
    scanf("%d",&s);
    printf("Enter elements:\n");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be searched:");
    scanf("%d",&ele);
    high=s-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]>ele)
            high=mid-1;
        else if(a[mid]<ele)
            low=mid+1;
        else
            break;
    }
    if(low<=high)
        printf("Position of the element is:%d",mid+1);
    else
        printf("Element not found.");
}
