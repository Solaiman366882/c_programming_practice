#include<stdio.h>
int main()
{
    float x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Round of x is:%lf\n",round(x));
    printf("Trunc of x is:%lf\n",trunc(x));
    printf("ceil of x is:%lf\n",ceil(x));
    printf("floor of x is:%lf\n",floor(x));
    return 0;
}
