#include<stdio.h>
double add(double num1,double num2)
{
    double sum = num1 + num2;
    return sum;
}
int main()
{
    double a,b,c;
    printf("Enter a real number for a:");
    scanf("%lf",&a);
    printf("Enter a real number for b:");
    scanf("%lf",&b);
    c =add(a,b);
    printf("%lf",c);
    return 0;
}
