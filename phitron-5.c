#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    if(x+0 >= 'A' && x+0 <= 'Z')
        printf("ALPHA\nIS CAPITAL");
    else if(x+0 >= 'a' && x+0 <= 'z')
        printf("ALPHA\nIS SMALL");
    else
        printf("IS DIGIT");

    return 0;
}
