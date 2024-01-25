#include<stdio.h>
void printMinMax(int arr[],int n)
{
    int min=arr[0],max=arr[0];
    for(int i=0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printMinMax(arr,n);
    return 0;
}