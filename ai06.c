//this program is only for convert uppercase character  to lower case
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter a uppercase character:");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Your lower case character is:%c",lower);
    return 0;
}
