#include<stdio.h>
#include<math.h>
double divisor( double x)
{
    double y =2*x;
    x= y*2;
    return (x/y);
}
int main()
{
    int x=10,y=20,z=30;
    z=round(divisor(x));
    printf("%d %d %d",x,y,z);
    return 0;
}
