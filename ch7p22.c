#include<stdio.h>
int test_function(int ara[])
{
    ara[0]= 100;
    return;
}
int main()
{
    int ara[] = {50,20,202,2943};
    test_function(ara);
    printf("%d",ara[0]);
    return 0;
}
