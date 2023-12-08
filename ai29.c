//This program is only for absolute value,square root, power
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter The value of n:");
    scanf("%d",&n);
    x = abs(n);
    printf("%d absolute value:%d\n",n,x);
    x= sqrt(n);
    printf("%d square root:%d\n",n,x);
    x=pow(n,2);
    printf("%d power 2 is:%d\n",n,x);
    return 0;
}
