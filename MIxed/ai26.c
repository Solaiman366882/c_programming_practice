//This program is only for find x1,x2
#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the of a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    d =sqrt(b*b -4*a*c);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
    printf("x1=%f\nx2=%f",x1,x2);
    return 0;
}
