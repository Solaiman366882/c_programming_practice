#include<stdio.h>
#include<conio.h>
int main(){
    double num1,num2,add,sub,mul,div;
    char addsign='+',subsign='-',mulsign='*',divsign='/',equalsign='=';
    printf("Enter a number:");
    scanf("%lf",&num1);
    printf("Enter another number:");
    scanf("%lf",&num2);
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    printf("%0.2lf %c %0.2lf %c %0.2lf\n",num1,addsign,num2,equalsign,add);
    printf("%0.2lf %c %0.2lf %c %0.2lf\n",num1,subsign,num2,equalsign,sub);
    printf("%0.2lf %c %0.2lf %c %0.2lf\n",num1,mulsign,num2,equalsign,mul);
    printf("%0.2lf %c %0.2lf %c %0.2lf\n",num1,divsign,num2,equalsign,div);
    return 0;

}
