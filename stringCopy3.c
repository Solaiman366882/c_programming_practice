#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    strcpy(str1,str2);
    printf("%s",str1);
    return 0;
}
