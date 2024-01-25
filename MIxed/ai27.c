#include<stdio.h>
//This program is only for assignment operator
int main()
{
    int a=5,b=10;
    printf("The value of a is:%d\n",a);
    a+=b;
    printf("The value of a+=b is:%d\n",a);
    a-=b;
    printf("The value of a-=b is:%d\n",a);
    a*=b;
    printf("The value of a*=b is:%d\n",a);
    a/=b;
    printf("The value of a/=b is:%d\n",a);
    a%=b;
    printf("The value of a%=b is:%d\n",a);
    return 0;

}
