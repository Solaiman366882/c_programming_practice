#include<stdio.h>

int main(){
    double num1,num2,add,sub,mul,div;
    printf("Enter a number:");
    scanf("%lf",&num1);
    printf("Enter another number:");
    scanf("%lf",&num2);
    add = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    printf("%lf + %lf = %0.2lf\n",num1,num2,add);
    printf("%lf - %lf = %0.2lf\n",num1,num2,sub);
    printf("%lf * %lf = %0.2lf\n",num1,num2,mul);
    printf("%lf / %lf = %0.2lf\n",num1,num2,div);
    return 0;

}
