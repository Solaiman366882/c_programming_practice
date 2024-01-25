//This program is only for convert centigrade temperature into farenheit
#include<stdio.h>
int main()
{
    float cent,far;
    printf("Enter Celcius:");
    scanf("%f",&cent);
    far = (1.8*cent)+32;
    printf("Celcius =%.2f",far);
    return 0;
}
