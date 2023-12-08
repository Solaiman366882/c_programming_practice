#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i =0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    int lowest = arr[0];
    for(int i =0; i < n; i++)
    {
        if(arr[i] < lowest){
            lowest = arr[i];
        }

    }
    for(int i =0; i < n; i++)
    {
        if(lowest == arr[i])
        {
            printf("%d %d",arr[i],i+1);
            break;
        }
    }
    return 0;
}
