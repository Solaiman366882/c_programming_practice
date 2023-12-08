#include<stdio.h>
#include<string.h>

int main()
{
    char firstString[1000];
    scanf("%s",&firstString);
    char secondString[1000];
    scanf("%s",&secondString);
    int firstCount = 0, secondCount = 0;
    for(int i =0; firstString[i] != '\0'; i++)
    {
        firstCount++;
    }
    for(int i = 0; secondString[i] != '\0'; i++)
    {
        secondCount++;
    }
    printf("%d %d\n",firstCount,secondCount);
    printf("%s %s",firstString, secondString);
    return 0;
}
