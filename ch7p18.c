#include<stdio.h>
double add(double num1, double num3);
int main()
{
    double a,b,c;
    a=2.7;
    b=2.8;
    c= add(a,b);
    printf("%lf",c);
    return 0;
}
double add(double x, double y)
{
    double sum = x+y;
    return sum;
}
