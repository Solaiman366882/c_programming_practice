#include<stdio.h>

int main()
{
    int e,m,b;
    scanf("%d %d %d",&e,&m,&b);

    int countOnThirdCondition = 0;
    int countOnFirstCondition = 0;

    for(int i= 1; i<=m; i++)
    {
     if(e != 0 && m!=0 && b!=0)
     {
        countOnThirdCondition++;
        m--;
        e--;
        b--;
     }
    }
    printf("%d %d %d %d",countOnThirdCondition,e,m,b);

    return 0;
}
