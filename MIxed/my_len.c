#include<stdio.h>
int my_len(char str[])
{
    int strCount = 0;
    for(int i =0; str[i] != '\0'; i++)
    {
        strCount++;
    }
    return strCount;
}
int main()
{
    char str[10000];
    scanf("%s",str);
    printf("%d",my_len(str));
    return 0;
}
