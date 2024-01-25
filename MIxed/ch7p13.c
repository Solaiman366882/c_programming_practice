#include<stdio.h>
double find_avg(int ara[],int x)
{
    int sum=0;
    double avg;
    for(int i=0;i<x;i++)
    {
        sum = sum+ara[i];
    }
    avg = (float)sum/(x-1);
    return avg;
}
int main()
{
    int ara[]= {-100,0,53,22,83,23,89,-132,21,3,85};

    int n = 11;
    double average =find_avg(ara,n);
    printf("%lf",average);
    return 0;
}
