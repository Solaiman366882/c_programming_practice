#include<stdio.h>
int fun(int arr[], int n, int i)
{
    if(i == n) return 0;
    int sum = 0;
    sum += fun(arr,n, i +1);
    printf("sum: %d\n",sum);
    return arr[i];

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = fun(arr,n,0);
    return 0;
}
