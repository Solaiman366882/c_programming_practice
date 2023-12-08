#include<stdio.h>
int find_max(int ara[],int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
    }
    return max;
}
int main()
{
    int ara1[] = {-100,0,53,22,83,23,89,-132,201,3,85};
    int n=11;
    int max;
    printf("Max Number Is:%d\n",find_max(ara1,n));
    return 0;
}
