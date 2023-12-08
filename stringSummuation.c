#include<stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000001];
    scanf("%s",&str);
    int sum =0,i =0;
    while(str[i] != '\0')
    {
        sum += str[i] - 48;
        i++;
    }
    printf("%d",sum);
    return 0;
}
