#include<stdio.h>
int main()
{
    char country[]= "Bangladesh is my country";
    for(int i=0; country[i]!='\0'; i++ )
    {
        if(country[i] >= 'a' && country[i]<='z'){
            country[i] = country[i] - 32;
        }
    }
    printf("%s",country);
    return 0;
}
