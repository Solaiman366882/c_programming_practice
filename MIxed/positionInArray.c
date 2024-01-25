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
    for(int i =0; i < n; i++)
    {
        if(arr[i] <= 10)
        {
            printf("A[%d] = %d\n",i,arr[i]);
        }
    }
    return 0;

}
