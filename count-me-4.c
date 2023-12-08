#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[10001];
    scanf("%s",str);
    int count[26] = {0};
    int length = strlen(str);
    for(int i =0; i < length; i++)
    {
        int val = str[i] - 97;
        count[val]++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c - %d\n",i + 97,count[i]);
        }
    }

    return 0;
}

