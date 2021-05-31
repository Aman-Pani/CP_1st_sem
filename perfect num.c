//perfect number
#include<stdio.h>
main()
{
  int rng,i,sum,j;
  printf("Enter range:");
  scanf("%d",&rng);
  for(i=1;i<=rng;i++)
  {
    sum=0;
    for(j=1;j<i;j++)
    {
      if(i%j==0)
        sum=sum+j;
    }
    if(sum==i)
      printf("%d\t",i);
  }
}
