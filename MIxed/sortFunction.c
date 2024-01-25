#include<stdio.h>
void printNum(int n)
{
    for(int i=1; i <= n; i++)
    {
        printf("%d",i);
        if(i < n)
        {
            printf(" ");
        }
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printNum(a);
    return 0;
}
