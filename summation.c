#include<stdio.h>

int main()
{
    int a;
    long long int sum = 0;

    scanf("%d",&a);

    int arr[a] ;

    for(int i = 0; i < a; i++)
    {
        int n;
        scanf("%d",&n);
        arr[i] = n;
    }
    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    if(sum < 0)
    {
        sum = sum * -1;
    }

    printf("%lld",sum);

    return 0;

}
