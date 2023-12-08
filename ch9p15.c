#include<stdio.h>
int srtingLength(char str[])
{
    int i,length = 0;
    for(i=0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    /*
    char country[] = "Bangladesh Is My country";
    int length = srtingLength(country);
    printf("%d\n",length);
    */
    char country[] ={};
    int length;
    while(1 == scanf("%s",country))
    {
        int length = srtingLength(country);
        printf("Length: %d\n",length);
    }
    return 0;
}
