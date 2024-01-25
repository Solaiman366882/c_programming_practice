#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        char str[101];
        scanf("%s",&str);
        int length = strlen(str);
        if(length <= 10){
            printf("%s\n",str);
        }
        else{
            printf("%c%d%c\n",str[0],length-2,str[length-1]);
        }
    }
    return 0;
}
