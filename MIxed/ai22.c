//This program is only for convert farenheight temparature into centigrade
#include<stdio.h>
int main()
{
    float far,cent;
    printf("Enter Farenheit:");
    scanf("%f",&far);
    cent = 5*(far-32)/9;
    printf("Cent = %.2f",cent);
    return 0;
}
