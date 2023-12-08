//This program is only for convert a string into Uppercase or Lowercase
#include<stdio.h>
char string_Upper(char pera[])
{
    //char peraNew = pera;
    for(int i=0; pera[i]!= '\0'; i++)
    {
        if(pera[i] >= 'á' && pera[i]<='z')
        {
            pera[i] = pera[i] - 32;
        }
        else
        {
            pera[i] = pera[i];
        }
    }
    return pera;
}
char stringLower(char pera[]){}

int main()
{
    char country[] = "Bangladesh is my country";
    //printf("%s\n",country);
    //country = string_Upper(country);
    //printf("%d",);
    //char size[]={typeof(country)};
//    printf("%s",size);
    return 0;
}




