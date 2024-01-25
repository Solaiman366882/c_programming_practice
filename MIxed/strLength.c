#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    //scanf("%s",&str);
    fgets(str,12,stdin);
    int i =0, count = 0;
    while(str[i] != '/0')
    {
        count++;
    }
    int stl = strlen(str);

    printf("%d %d",count,stl);

    return 0;
}
