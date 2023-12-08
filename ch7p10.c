#include<stdio.h>
int find_max(int ara[],int x);

int main()
{
    int ara[]= {-100,0,53,22,83,23,89,-132,21,3,85};

    int n = 11;
    int max=find_max(ara,n);
    printf("%d",max);
    return 0;
}
int find_max(int ara[],int a)
{
    int max =ara[0];
    for (int i=0;i<a;i++)
    {
        if(max<ara[i])
        {
            max = ara[i];
        }
    }
    return max;
}
