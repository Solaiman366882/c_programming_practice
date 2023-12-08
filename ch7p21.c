//This program is only for find min and max of an array
#include<stdio.h>
int find_max(int ara[],int n)
{
    int max = ara[0];
    for(int i=0;i<n;i++)
    {
        if(max<ara[i])
            max = ara[i];
    }
    return max;
}
int find_min(int ara[], int n)
{
    int min = ara[0];
    for(int i=0;i<n;i++)
    {
        if(min >ara[i])
            min = ara[i];
    }
    return min;
}
int main()
{
    int ara[]={20,30,10,40,50,60,70,80,90,100};
    int max =find_max(ara,10);
    int min = find_min(ara,10);
    printf("Max index is= %d\nMin index is = %d\n",max,min);
    return 0;
}
