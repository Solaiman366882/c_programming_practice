#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s",&str);
    int length = strlen(str);
    int isPalindrome = 1;

    for(int i = 0, j = length-1; i < length; i++,j--)
    {
        if(str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
