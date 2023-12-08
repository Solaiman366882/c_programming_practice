#include<stdio.h>
int main(){
    double velocity,time,distance;
    printf("Enter Your Velocity:");
    scanf("%lf",&velocity);
    printf("Enter Time:");
    scanf("%lf",&time);
     distance = velocity*time;
     printf("Total Distance:%0.2lf ms",distance);

}
