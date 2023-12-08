// This Program is only for swap the value of two variable
#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1=%d\t n2=%d",n1,n2);
    return 0;
}
