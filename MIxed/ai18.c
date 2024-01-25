//A program find triangle area
#include<stdio.h>
int main(){
    double base,height,area;
    printf("Enter Your Triangle base:");
    scanf("%lf",&base);
    printf("Enter your triangle height:");
    scanf("%lf",&height);
    area = 0.5* (base*height);
    printf("Your Triangle area is:%0.2lf",area);
    return 0;

}
