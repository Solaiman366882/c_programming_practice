#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arrFirst[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arrFirst[i]);
    }
    int m;
    scanf("%d",&m);
    int arrSecond[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d",&arrSecond[i]);
    }
    int arrResult[n+m];
    for(int i = 0; i < n; i++)
    {
        arrResult[i] = arrFirst[i];
    }
    int i = n;
    for(int j = 0; j < m; j++)
    {
        arrResult[i] = arrSecond[j];
        i++;
    }
    for(int i = 0; i < m+n; i++)
    {
        printf("%d ",arrResult[i]);
    }

    return 0;
}
