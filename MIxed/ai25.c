//This is program is only for swap value without temporary variable
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter Two Numbers:");
    scanf("%d %d",&n1,&n2);
    n1 =  n1-n2;
    n2 = n1+n2;
    n1 =  n2-n1;
    printf("n1=%d\n n2=%d",n1,n2);
    return 0;
}
