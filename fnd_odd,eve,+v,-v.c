//find odd,even,+ve,-ve
#include<stdio.h>
main()
{
    int i,s,a[100],o,e,pos,neg;
    printf("size of array:");
    scanf("%d",&s);
    printf("Enter the array:\n");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("even numbers:");
    for(i=0;i<s;i++)
        if(a[i]%2==0)
            printf("%d\t",a[i]);
     printf("\nodd numbers:");
     for(i=0;i<s;i++)
        if(a[i]%2!=0)
            printf("%d\t",a[i]);
     printf("\n+ve numbers:");
     for(i=0;i<s;i++)
        if(a[i]>0)
            printf("%d\t",a[i]);
     printf("\n-ve numbers:");
     for(i=0;i<s;i++)
        if(a[i]<0)
            printf("%d\t",a[i]);
}
