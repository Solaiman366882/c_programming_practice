#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k = n;
    for(int i =1; i <= n; i++)
    {
        for(int j =k; j >0; j--)
        {
            printf("*");
        }
        k--;
        printf("\n");

    }
    return 0;
}
