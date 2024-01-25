#include<stdio.h>
void fun(int n)
{
    if(n%10 == 0) return;
    fun(n/10);
    printf("%d ",n%10);
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
    for(int i=0; i < n; i++)
    {
        fun(arr[i]);
        printf("\n");
    }
    return 0;
}
