//this program is only for found log and log10
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("the value of log %d:%d\n",x,log(x));
    printf("the value of log10 %d:%d\n",x,log10(x));
    return 0;
}
