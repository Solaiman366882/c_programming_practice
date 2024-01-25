//This program is only for find area of area of a triangle
#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter The Value of a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area =.2%f",area);
    return 0;

}
