#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        if(n == 1)
        {
            printf("%d\n",-1);
        }
        else{
            if(i % 2 == 0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
