#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int m;
        scanf("%d",&m);
        arr[i] = m;
    }
    int find;
    scanf("%d",&find);
    int found = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == find)
        {
            found = i;
            break;
        }

    }
    printf("%d",found);

    return 0;
}
