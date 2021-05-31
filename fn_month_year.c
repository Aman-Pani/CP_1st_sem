//enter month no. & year , get no. of days of that month
#include<stdio.h>
void mon_yr(int,int);
int main()
{
    int m,y;
    printf("Enter month & year : ");
    scanf("%d%d",&m,&y);
    mon_yr(m,y);
    return 0;
}

void mon_yr(int m,int y)
{
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Number of days = ");
    if(m==2 && ((y%4==0 && y%100!=0) || y%400==0))
        printf("%d",months[m-1]+1);
    else
        printf("%d",months[m-1]);
}
