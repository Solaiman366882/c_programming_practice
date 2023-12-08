#include<stdio.h>
int main()
{
    char country[] = "Bangladesh Is Country and I LOVE MY COUNTRY" ;
    for(int i=0; country[i] != '\0'; i++)
    {
        if(country[i]>='A' && country[i]<='Z')
            country[i] = 'a' + (country[i] - 'A');
    }
    printf("%s",country);
    return 0;
}
