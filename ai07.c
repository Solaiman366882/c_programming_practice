//This program is only for convert a lowercase letter to uppercase letter
#include<stdio.h>
int main()
{
    char upper, lower;
    printf("Enter any Lower Case Letter:");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("Your Uppercase Letter is:%c",upper);
    return 0;
}
