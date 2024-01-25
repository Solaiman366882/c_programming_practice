#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++)
    {
        long long int m;
        int a,b,c;
        scanf("%d %d %d %d",&m,&a,&b,&c);
        long long int afterDivisionValue;
        if(m ==  0)
        {
            printf("0\n");
        }
        else if(m % a == 0)
        {
            afterDivisionValue = m / a;
            if(afterDivisionValue % b == 0)
            {
                afterDivsionValue = afterDivisionValue / b;
                if(afterDevisionValue % c == 0)
                {
                    afterDivsionValue = afterDivisionValue / c;
                    printf("%ld\n",afterDivisionValue);
                }
                else
                {
                    printf("-1\n");
                }
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            printf("-1\n");
        }
    }
}
