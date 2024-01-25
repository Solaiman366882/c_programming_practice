//This program is only for  find capital and small Case letter
#include<stdio.h>
int main()
{
    /*
    int ara[] ={10,20,40,};
    printf("%d",sizeof(ara));
    */
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);
    if(letter>='a' && letter<='z')
        printf("Its a small letter.");
    else if(letter>='A' && letter<='Z')
        printf("Its a Capital letter.");
    else
        printf("Its not a letter.");
    return 0;
}
