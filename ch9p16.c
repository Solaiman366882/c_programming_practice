#include<stdio.h>
int string_length(char str[])
{
    int i;
    int length = 0;
    for(i=0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}
int main()
{
    char country[100];
    int length;
    while(NULL != gets(country))
    {
        length = string_length(country);
        printf("Length is: %d\n",length);
    }
    return 0;
}
