#include<stdio.h>
// this program is only for find odd or even number
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2 == 0)
        printf("The Is Even.");
    else
        printf("The number is Odd.");
    return 0;
}
