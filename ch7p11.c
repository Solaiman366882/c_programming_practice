#include<stdio.h>

int find_min(int ara[],int n)
{
    int min=ara[0];
    for(int i=0;i<n;i++)
    {
        if(min>ara[i])
        {
            min=ara[i];
        }
    }
    return min;
}
int main()
{
    int ara[]= {-100,0,53,22,83,23,89,-132,21,3,85};

    int n = 11;
    printf("%d",find_min(ara,n));
    return 0;
}
