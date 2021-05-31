//ascending
#include<stdio.h>
main()
{
    int a[100],i,j,siz,temp;
    printf("size of array:");
    scanf("%d",&siz);
    printf("Enter elements:\n");
    for(i=0;i<siz;i++)
        scanf("%d",&a[i]);
    for(i=0;i<siz;i++)
        for(j=i+1;j<siz;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    printf("Ascending array is:\n");
    for(i=0;i<siz;i++)
        printf("%d\t",a[i]);
}

