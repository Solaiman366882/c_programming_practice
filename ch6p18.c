//This Program is only for reverse index of an array
#include<stdio.h>
int main()
{
    int ara[] ={10,20,30,40,50,60,70,80,90,100};
    int ara2[10],i,j;
    for(i=0,j=9;i<10;i++,j--)
    {
        ara2[j] = ara[i];
    }
    for(i=0;i<10;i++)
    {
        ara[i] = ara2[i];
    }
    for(i=0;i<10;i++)
    {
        if(i == 0)
        {
            printf("1st element is:%d\n",ara[i]);
        }
        else if(i == 1)
        {
            printf("2nd element is:%d\n",ara[i]);
        }
        else if(i == 2)
        {
            printf("3rd element is:%d\n",ara[i]);
        }
        else
        {
          printf("%dth element is:%d\n",i+1,ara[i]);
        }

    }
}
