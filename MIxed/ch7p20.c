#include<stdio.h>
double pi =3.14;
double my_func(){
    pi = 3.1416;
}
int main()
{
    printf("%lf\n",pi);
    my_func();
    printf("%lf\n",pi);
    return 0;

}
