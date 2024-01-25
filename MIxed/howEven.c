#include<stdio.h>

int main ()
{
    int n,a;
    scanf("%d",&n);
    int evenCount = 0, positiveCount = 0, negativeCount = 0, oddCount = 0;
    for(int i=0; i < n; i++)
    {
        scanf("%d",&a);
        if(a > 0)
        {
            positiveCount++;
        }
        if(a < 0)
        {
            negativeCount++;
        }
        if(a == 0)
        {
            evenCount++;
        }
        else if(a % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",evenCount,oddCount,positiveCount,negativeCount);
    return 0;
}
