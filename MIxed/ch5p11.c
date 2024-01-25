#include<stdio.h>

int main(){
    int celcius,farenheight;
    printf("Enter the temperature in celcius:");
    scanf("%d",&celcius);
    farenheight = (celcius*9)/5 + 32;
    printf("The temperature in Farenheight: %d",farenheight);
}
