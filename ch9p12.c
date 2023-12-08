#include<stdio.h>
int main()
{
    char country[] = "Bangladesh Is My Country";
    for(int i=0; country[i]!='\0'; i++)
    {
        if(country[i] >= 'a' && country[i] <= 'z')
        {
            country[i] = 'A'+(country[i]- 'a');
        }
    }
    printf("%s\n",country);
}
