#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[100001];
    fgets(str,100001,stdin);
    int length = strlen(str);
    int count = 0;
    for(int i = 0; i < length-1; i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != '\0')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

