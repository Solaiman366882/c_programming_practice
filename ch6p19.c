//This array is only for reverse an array without defining another array.
#include<stdio.h>
int main()
{
    int ara[] = {10,20,30,40,50,60,60,80,90,100};
    int i,j,temp;
    for(i=0,j=9;i<5;i++,j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            printf("1st Element is:%d\n",ara[i]);
        }
        else if(i==1)
        {
            printf("2nd Element is:%d\n",ara[i]);
        }
        else if(i==2)
        {
            printf("3rd Element is:%d\n",ara[i]);
        }
        else
        {
            printf("%dth Element is:%d\n",i+1,ara[i]);
        }

    }
}
