#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int i = 0;
    while(1)
    {
        if(str1[i] == '\0' && str2[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if(str1[i] == '\0')
        {
            printf("first string is lower");
            break;
        }
        else if(str2[i] == '\0')
        {
            printf("Second string is lower");
            break;
        }
        else if(str1[i] < str2[i])
        {
            printf("First String is lower");
            break;
        }
        else if(str1[i] > str2[i])
        {
            printf("Second String is Lower");
            break;
        }
        i++;
    }
}
