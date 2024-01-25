#include<stdio.h>
int main(){
    double x,y,a1,b1,c1,a2,b2,c2;
    printf("Enter The Value of a1:");
    scanf("%lf",&a1);
    printf("Enter The Value of b1:");
    scanf("%lf",&b1);
    printf("Enter The Value of c1:");
    scanf("%lf",&c1);
    printf("Enter The Value of a2:");
    scanf("%lf",&a2);
    printf("Enter The Value of b2:");
    scanf("%lf",&b2);
    printf("Enter The Value of c2:");
    scanf("%lf",&c2);
    x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
    printf("x = %0.2lf, y = %0.2lf",x,y);
}
