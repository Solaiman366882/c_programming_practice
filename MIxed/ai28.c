#include<stdio.h>
//This program is only for unary operator
int main()
{
    int a=10,b=20,c=-15;

    int x=+c;
    printf("This is the example of unary plus operator:%d\n",x);
    int y=-b;
    printf("This is the example of unary minus operator:%d\n",y);
    x=++a;
    printf("This is the example of pre increment:%d\n",x);
    printf("This is the example of pre increment:%d\n",a);
    x=a++;
    printf("This is the example of post increment:%d\n",x);
    printf("This is the example of post increment:%d\n",a);
    y=--a;
    printf("This is the example of pre decrement:%d\n",y);
    printf("This is the example of pre decrement:%d\n",a);
    y=a--;
    printf("This is the example of post decrement:%d\n",y);
    printf("This is the example of post decrement:%d\n",a);
    return 0;

}
