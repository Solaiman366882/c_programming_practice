#include<stdio.h>
int find_sum(int ara[],int a)
{
    int sum =0;
    for(int i=0;i<a;i++)
    {
        sum = sum+ara[i];
    }
    return sum;
}
int main()
{
    int ara[]= {-100,0,53,22,83,23,89,-132,21,3,85};

    int n = 11;
    printf("%d",find_sum(ara,n));
    return 0;
}
