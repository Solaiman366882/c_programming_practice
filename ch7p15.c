#include<stdio.h>

double circle_area(float r)
{
    double area = 3.1416*r*r;
    return area;
}
int main()
{
    int radius;
    printf("Enter Your Circle Radius:");
    scanf("%d",&radius);
    printf("%lf",circle_area(radius));
    return 0;
}
