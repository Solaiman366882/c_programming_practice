#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int firstDigit = a / 10;
    int secondDigit = a % 10;

    if(firstDigit > 0 && secondDigit> 0)
    {
        if(firstDigit % secondDigit == 0)
        {
            printf("YES");
        }
        else if(secondDigit % firstDigit == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("YES");
    }

    return 0;

}
