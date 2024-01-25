#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i = 0;
    while(1)
    {
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if(a[i] == '\0')
        {
            printf("A choto");
            break;
        }
        else if(b[i] == '\0')
        {
            printf("B Choto");
            break;
        }

        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i] > b[i])
        {
            printf("B choto");
            break;
        }
        else{
            printf("A Choto");
            break;
        }

    }
    return 0;
}
