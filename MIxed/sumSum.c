#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&n);
        arr[i] = a;
    }
    int positiveSum = 0,negativeSum = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            positiveSum += arr[i];
        }
        else{
            negativeSum += arr[i];
        }
    }
}
