//A program for find the area of a reactangle
#include<stdio.h>

int main()
{
    float length,width,area;
    printf("Enter The Value Of Legnth:");
    scanf("%f",&length);
    printf("Enter the value of width:");
    scanf("%f",&width);
    area = length*width;
    printf("Area = %0.1f",area);
    return 0;

}
