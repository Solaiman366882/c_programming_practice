#include<stdio.h>
int main()
{
    char country[] = {'B','a','n','g','l','a','d','e','s','h'};
    int i,length=10;
    printf("%s\n",country);
    for(i=0;i<length;i++)
    {
        if(country[i]>='a' && country[i]<='z')
        {
            country[i] = country[i] - 32;
        }
    }
    printf("%s\n",country);
    return 0;
}
