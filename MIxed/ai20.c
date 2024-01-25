//A program for find area of circle
#include<stdio.h>
int main()
{
    float r,area,pi=3.1416;
    printf("enter your circle radius:");
    scanf("%f",&r);
    area = pi*r*r;
    printf("Your Circle area is:%0.1f",area);
    return 0;

}
