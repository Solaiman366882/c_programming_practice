//This program is only for find leap year in 2000 to 2100
#include<stdio.h>
int main()
{
    int year[100];
    int year_count=2000,i;
    for(i=0;i<100;i++,year_count++)
    {
        year[i]=year_count;
    }
    for(i=0;i<100;i++)
    {
        if(year[i]%400 == 0)
            printf("%d is a leap year.\n",year[i]);
        else if(year[i]%4 ==0 && year[i]%100!=0)
            printf("%d is a leap year.\n",year[i]);
    }
    return 0;
}
