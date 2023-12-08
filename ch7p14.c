#include<stdio.h>
void test_function(int ara[])
{
    ara[0]=100;
}
int main()
{
    int ara[]={1,2,3,4,5};
    printf("%d\n",ara[0]);
    test_function(ara);
    printf("%d",ara[0]);
    return 0;
}
