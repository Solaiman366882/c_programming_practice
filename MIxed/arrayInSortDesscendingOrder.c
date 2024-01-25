#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i <n; i++)
    {
        int temp =0;
        for(int j= i+1; j <n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                //printf("temp:%d arrI:%d arrJ:%d\n",temp,arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
