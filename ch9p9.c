#include<stdio.h>
int main()
{
    char country[11] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    char country2[] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    char country3[] = "Bangladesh";
    char*country4 = "Bangladesh";
    printf("%s\n",country);
    printf("%s\n",country2);
    printf("%s\n",country3);
    printf("%c",country4[9]);
    return 0;
}
