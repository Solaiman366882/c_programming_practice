#include<stdio.h>

int main()
{
    double a1,b1,c1,a2,b2,c2,d,x,y;
    printf("a1=");
    scanf("%lf",&a1);
    printf("b1=");
    scanf("%lf",&b1);
    printf("c1=");
    scanf("%lf",&c1);
    printf("a2=");
    scanf("%lf",&a2);
    printf("b2=");
    scanf("%lf",&b2);
    printf("c2=");
    scanf("%lf",&c2);
    // here we will start the  main program

    d = a1*b2 - a2*b1;

    if((int)d == 0){
        printf("The value of x and y cannot be determined.");
    }else{
            x = (b2*c1 - b1*c2)/d;
            y = (a1*c2 - a2*c1)/d;

            printf("X=%0.2lf Y=%0.2lf",x,y);
    }

}
