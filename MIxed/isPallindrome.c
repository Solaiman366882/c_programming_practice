#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char str[])
{
    int pali = 1;
    int len = strlen(str);
    int j = len-1;
    for(int i = 0; i <= len/2; i++)
    {
        if(str[i] != str[j])
        {
            pali = 0;
            break;
        }
        j--;
    }
    return pali;
}

int main() {

    char str[1001];
    scanf("%s",str);
    int palindrome = is_palindrome(str);
    if(palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
