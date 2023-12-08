#include<stdio.h>
int main()
{
    char country[] = "Bangladesh IS My COUNTRY AND I LOVE MY COUNTRY VERY MUCH";
    for(int i=0; country[i]!='\0'; i++)
    {
        if(country[i]>='A' && country[i]<='Z')
            country[i] = country[i] + 32;
    }
    printf("%s",country);
    return 0;
}
